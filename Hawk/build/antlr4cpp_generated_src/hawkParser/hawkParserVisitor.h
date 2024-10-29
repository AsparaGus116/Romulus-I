
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

    virtual std::any visitAssignOp(hawkParser::AssignOpContext *context) = 0;

    virtual std::any visitNumber(hawkParser::NumberContext *context) = 0;

    virtual std::any visitCond(hawkParser::CondContext *context) = 0;

    virtual std::any visitStmt(hawkParser::StmtContext *context) = 0;

    virtual std::any visitTrueStmt(hawkParser::TrueStmtContext *context) = 0;

    virtual std::any visitSubscriptExpr(hawkParser::SubscriptExprContext *context) = 0;

    virtual std::any visitFuncCallExpr(hawkParser::FuncCallExprContext *context) = 0;

    virtual std::any visitAddrExpr(hawkParser::AddrExprContext *context) = 0;

    virtual std::any visitXorExpr(hawkParser::XorExprContext *context) = 0;

    virtual std::any visitParenExpr(hawkParser::ParenExprContext *context) = 0;

    virtual std::any visitUnaryExpr(hawkParser::UnaryExprContext *context) = 0;

    virtual std::any visitLOrExpr(hawkParser::LOrExprContext *context) = 0;

    virtual std::any visitTernaryExpr(hawkParser::TernaryExprContext *context) = 0;

    virtual std::any visitPostfixExpr(hawkParser::PostfixExprContext *context) = 0;

    virtual std::any visitRelExpr(hawkParser::RelExprContext *context) = 0;

    virtual std::any visitBitAndExpr(hawkParser::BitAndExprContext *context) = 0;

    virtual std::any visitBraceExpr(hawkParser::BraceExprContext *context) = 0;

    virtual std::any visitAccessExpr(hawkParser::AccessExprContext *context) = 0;

    virtual std::any visitAddSubExpr(hawkParser::AddSubExprContext *context) = 0;

    virtual std::any visitPtrAccessExpr(hawkParser::PtrAccessExprContext *context) = 0;

    virtual std::any visitLAndExpr(hawkParser::LAndExprContext *context) = 0;

    virtual std::any visitRelationalExpr(hawkParser::RelationalExprContext *context) = 0;

    virtual std::any visitNumExpr(hawkParser::NumExprContext *context) = 0;

    virtual std::any visitShiftExpr(hawkParser::ShiftExprContext *context) = 0;

    virtual std::any visitPrefixExpr(hawkParser::PrefixExprContext *context) = 0;

    virtual std::any visitVarExpr(hawkParser::VarExprContext *context) = 0;

    virtual std::any visitEqExpr(hawkParser::EqExprContext *context) = 0;

    virtual std::any visitBitOrExpr(hawkParser::BitOrExprContext *context) = 0;

    virtual std::any visitNotExpr(hawkParser::NotExprContext *context) = 0;

    virtual std::any visitDerefExpr(hawkParser::DerefExprContext *context) = 0;

    virtual std::any visitMulDivExpr(hawkParser::MulDivExprContext *context) = 0;

    virtual std::any visitFunctionStmt(hawkParser::FunctionStmtContext *context) = 0;

    virtual std::any visitIfStmt(hawkParser::IfStmtContext *context) = 0;

    virtual std::any visitIfBlock(hawkParser::IfBlockContext *context) = 0;

    virtual std::any visitElifBlock(hawkParser::ElifBlockContext *context) = 0;

    virtual std::any visitElseBlock(hawkParser::ElseBlockContext *context) = 0;

    virtual std::any visitWhileStmt(hawkParser::WhileStmtContext *context) = 0;

    virtual std::any visitForRangeStmt(hawkParser::ForRangeStmtContext *context) = 0;

    virtual std::any visitForEachStmt(hawkParser::ForEachStmtContext *context) = 0;

    virtual std::any visitDoWhileStmt(hawkParser::DoWhileStmtContext *context) = 0;

    virtual std::any visitStruct(hawkParser::StructContext *context) = 0;


};

}  // namespace hawk
