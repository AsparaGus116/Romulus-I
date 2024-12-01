#include "Visitor.h"

LRU<VariableEntry*> Visitor::getVarCache()
{
    return varCache;
}

LRU<uint16_t> Visitor::getImmCache()
{
    return immCache;
}

Visitor::Visitor()
{
    out.open("asm.txt");
}

std::any Visitor::visitProgram(hawkParser::ProgramContext* ctx)
{
    std::string output;
    for (auto stmt : ctx->stmt())
    {
        visit(stmt);
    }
    out << output;
    out.close();
    return "EXIT";
}

std::any Visitor::visitStmt(hawkParser::StmtContext* ctx)
{
    if (ctx->functionStmt())
    {
        /*
        auto func = ctx->functionStmt();
        std::string name = func->ID()->getText();
        std::cout << "Entering function " << name;
        */
        return visit(ctx->functionStmt());
    }
    if (ctx->ifStmt())
    {
        return visit(ctx->ifStmt());
    }
    if (ctx->whileStmt())
    {
        return visit(ctx->whileStmt());
    }
    if (ctx->doWhileStmt())
    {
        return visit(ctx->doWhileStmt());
    }
    if (ctx->forRangeStmt())
    {
        return visit(ctx->forRangeStmt());
    }
    if (ctx->forEachStmt())
    {
        return visit(ctx->forEachStmt());
    }
    if (ctx->struct_())
    {
        return visit(ctx->struct_());
    }
    if (ctx->trueStmt())
    {
        return visit(ctx->trueStmt());
    }
    return "HERE";
}

std::any Visitor::visitFunctionStmt(hawkParser::FunctionStmtContext* ctx)
{
    FunctionEntry f;
    std::string functionOutput;
    std::string type = ctx->type()->getText();
    if (type == "int")
    {
        f.setReturnValue(ReturnType::INT);
    }
    else if (type == "void")
    {
        f.setReturnValue(ReturnType::VOID);
    }
    else if (type == "bool")
    {
        f.setReturnValue(ReturnType::BOOL);
    }
    else if (type == "char")
    {
        f.setReturnValue(ReturnType::CHAR);
    }
    else if(type.find("*") != -1 )
    {
        f.setReturnValue(ReturnType::PTR);
    }

    for (int i = 0; i < ctx->parameter().size(); i++)
    {
        f.appendParam(std::any_cast<const VariableEntry>(visitParameter(ctx->parameter(i))));
    }

    for (auto stmt : ctx->stmt())
    {
        visit(stmt);
        //functionOutput += std::any_cast<std::string>(visitStmt(stmt));
    }
    return functionOutput;
}

std::any Visitor::visitParameter(hawkParser::ParameterContext* ctx)
{
    int lineNumber = ctx->getStart()->getLine();
    int columnNumber = ctx->getStart()->getCharPositionInLine();
    if (ctx->type()->getText() == "void")
    {
        utils::error(lineNumber, columnNumber, "cannot have void variable type");
        return VariableEntry{ ctx->ID()->getText(), VarType::ERROR };
    }
    else if (ctx->type()->getText() == "int")
    {
        return VariableEntry{ ctx->ID()->getText(), VarType::INT };
    }
    else if (ctx->type()->getText() == "bool")
    {
        return VariableEntry{ ctx->ID()->getText(), VarType::BOOL };
    }
    else if (ctx->type()->getText() == "char")
    {
        return VariableEntry{ ctx->ID()->getText(), VarType::CHAR };
    }
    else if (ctx->type()->getText().find("*") != -1)
    {
        return VariableEntry{ ctx->ID()->getText(), VarType::PTR };
    }
    else
    {
        utils::error(lineNumber, columnNumber, "cannot resolve type \"" + ctx->type()->getText() + "\"");
    }

    return nullptr;
}

std::any Visitor::visitExprStmt(hawkParser::ExprStmtContext* ctx)
{
    return "";
}

std::any Visitor::visitNumber(hawkParser::NumberContext* ctx)
{
    int x;
    if (ctx->INT())
    {
        x = std::stoi(ctx->INT()->getText(), nullptr, 10);
    }
    else if (ctx->HEX())
    {
        std::string str = ctx->HEX()->getText().substr(2, ctx->HEX()->getText().size() - 2);
        x = std::stoi(str, nullptr, 16);
    }
    else if (ctx->BIN())
    {
        std::string str = ctx->BIN()->getText().substr(2, ctx->BIN()->getText().size() - 2);
        x = std::stoi(str, nullptr, 2);
    }
    else
    {
        return nullptr;
    }
    Regs reg = immCache.process(x);
    if (ctx->INT())
    {
        out << utils::loadImm(reg, x, Format::DEC);
    }
    else if (ctx->HEX())
    {
        out << utils::loadImm(reg, x, Format::HEX);
    }
    else if (ctx->BIN())
    {
        out << utils::loadImm(reg, x, Format::BIN);
    }
    return reg;
}

std::any Visitor::visitAssignStmt(hawkParser::AssignStmtContext* ctx)
{
    VariableEntry* v1 = std::any_cast<VariableEntry*>(visit(ctx->expr(0)));
    Regs left = varCache.process(v1);
    v1->setReg(left);
    Regs right = Regs::NIL;
    uint16_t value;
    if (dynamic_cast<hawkParser::NumExprContext*>(ctx->expr(1)))
    {
        right = std::any_cast<Regs>(visit(ctx->expr(1)));
        value = immCache.find(right);
    }
    else if (dynamic_cast<hawkParser::VarExprContext*>(ctx->expr(1)))
    {
        VariableEntry* v2 = std::any_cast<VariableEntry*>(visit(ctx->expr(1)));
        right = varCache.process(v2);
        value = v2->getValue();
    }
    if (ctx->assignOp()->KASSIGN())
    {
        out << utils::output("MOV", utils::toString(right), utils::toString(left));
        varCache.find(left)->setValue(value);
    }
    else if (ctx->assignOp()->KADDASSIGN())
    {
        out << utils::output("ADD", utils::toString(right), utils::toString(left));
    }
    else if (ctx->assignOp()->KSUBASSIGN())
    {
        out << utils::output("SUB", utils::toString(right), utils::toString(left));
    }
    else if (ctx->assignOp()->KMULASSIGN())
    {
        
    }
    else if (ctx->assignOp()->KDIVASSIGN())
    {

    }
    else if (ctx->assignOp()->KMODASSIGN())
    {

    }
    else if (ctx->assignOp()->KANDASSIGN())
    {
        out << utils::output("AND", utils::toString(right), utils::toString(left));
    }
    else if (ctx->assignOp()->KORASSIGN())
    {
        out << utils::output("OR", utils::toString(right), utils::toString(left));
    }
    else if (ctx->assignOp()->KXORASSIGN())
    {
        out << utils::output("XOR", utils::toString(right), utils::toString(left));
    }
    else if (ctx->assignOp()->KSHLASSIGN())
    {
        utils::loop(value, utils::output("SHL", utils::toString(left)));
    }
    else if (ctx->assignOp()->KSHRASSIGN())
    {

    }

    return "HERE";
}

std::any Visitor::visitVarExpr(hawkParser::VarExprContext* ctx)
{
    int lineNumber = ctx->getStart()->getLine();
    int columnNumber = ctx->getStart()->getCharPositionInLine();
    if (ctx->type())
    {
        VarType v = VarType::ERROR;
        auto type = ctx->type()->getText();
        if (type == "void")
        {
            
            utils::error(lineNumber, columnNumber, "cannot have void variable type");
        }
        else if (type == "int")
        {
            v =  VarType::INT;
        }
        else if (type == "bool")
        {
            v = VarType::BOOL;
        }
        else if (type == "char")
        {
            v = VarType::CHAR;
        }
        else if (type.find("*") != -1)
        {
            v = VarType::PTR;
        }
        for (int i = 0; i < stack.size(); i++)
        {
            if (stack[i]->getIdentifier() == ctx->ID()->getText() && stack[i]->getEntryType() == EntryType::VARIABLE)
            {
                utils::error(lineNumber, columnNumber, "Variable redefinition; redefining \"" + ctx->ID()->getText() + "\"");
            }
        }
        VariableEntry* var = new VariableEntry{ ctx->ID()->getText(), v };
        stack.push_back(var);
        return var;
    }
    else
    {
        bool found = false;
        for (int i = 0; i < stack.size(); i++)
        {
            if (stack[i]->getIdentifier() == ctx->ID()->getText() && stack[i]->getEntryType() == EntryType::VARIABLE)
            {
                return dynamic_cast<VariableEntry*>(stack[i]);
            }
        }
        utils::error(lineNumber, columnNumber, "Referencing undefined variable \"" + ctx->ID()->getText() + "\"");
        return nullptr;
    }
}

std::string Visitor::loop(int times, std::string block)
{
    char* intStr;
    itoa(numLoops, intStr, 10);
    std::string ret = "LOOP_" + std::string(intStr) + ": \n";
    ++numLoops;
    
}
