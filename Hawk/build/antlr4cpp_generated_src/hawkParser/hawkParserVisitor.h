
// Generated from hawkParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "hawkParser.h"


namespace hawk {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by hawkParser.
 */
class  hawkParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by hawkParser.
   */
    virtual std::any visitProgram(hawkParser::ProgramContext *context) = 0;

    virtual std::any visitType(hawkParser::TypeContext *context) = 0;

    virtual std::any visitOp(hawkParser::OpContext *context) = 0;

    virtual std::any visitAssignOp(hawkParser::AssignOpContext *context) = 0;

    virtual std::any visitNumber(hawkParser::NumberContext *context) = 0;

    virtual std::any visitCond(hawkParser::CondContext *context) = 0;

    virtual std::any visitStmt(hawkParser::StmtContext *context) = 0;

    virtual std::any visitTrueStmt(hawkParser::TrueStmtContext *context) = 0;

    virtual std::any visitVarExpr(hawkParser::VarExprContext *context) = 0;

    virtual std::any visitArithmeticExpr(hawkParser::ArithmeticExprContext *context) = 0;

    virtual std::any visitRelationalExpr(hawkParser::RelationalExprContext *context) = 0;

    virtual std::any visitParenExpr(hawkParser::ParenExprContext *context) = 0;

    virtual std::any visitNumExpr(hawkParser::NumExprContext *context) = 0;

    virtual std::any visitFunctionStmt(hawkParser::FunctionStmtContext *context) = 0;

    virtual std::any visitIfStmt(hawkParser::IfStmtContext *context) = 0;

    virtual std::any visitIfBlock(hawkParser::IfBlockContext *context) = 0;

    virtual std::any visitElifBlock(hawkParser::ElifBlockContext *context) = 0;

    virtual std::any visitElseBlock(hawkParser::ElseBlockContext *context) = 0;

    virtual std::any visitWhileStmt(hawkParser::WhileStmtContext *context) = 0;

    virtual std::any visitForRange(hawkParser::ForRangeContext *context) = 0;


};

}  // namespace hawk
