#include "Visitor.h"

Visitor::Visitor()
{
    out.open("asm.txt");
}

std::any Visitor::visitProgram(hawkParser::ProgramContext* ctx)
{
    std::string output;
    for (auto stmt : ctx->stmt())
    {
        output += std::any_cast<std::string>(visit(stmt));
    }
    return output;
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
    return 0;
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
    if (ctx->INT())
    {
        int x = std::stoi(ctx->INT()->getText(), nullptr, 10);
        return x & 0xFFFF;
    }
    else if (ctx->HEX())
    {
        std::string str = ctx->HEX()->getText().substr(2, ctx->HEX()->getText().size() - 2);
        int x = std::stoi(str, nullptr, 16);
        return x & 0xFFFF;
    }
    else if (ctx->BIN())
    {
        std::string str = ctx->BIN()->getText().substr(2, ctx->BIN()->getText().size() - 2);
        int x = std::stoi(str, nullptr, 2);
        return x & 0xFFFF;
    }
    else
    {
        return nullptr;
    }
}
