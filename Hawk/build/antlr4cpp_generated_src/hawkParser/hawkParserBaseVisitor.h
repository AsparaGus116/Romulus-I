
// Generated from hawkParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "hawkParserVisitor.h"


namespace hawk {

/**
 * This class provides an empty implementation of hawkParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  hawkParserBaseVisitor : public hawkParserVisitor {
public:

  virtual std::any visitProgram(hawkParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(hawkParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignOp(hawkParser::AssignOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumber(hawkParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCond(hawkParser::CondContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmt(hawkParser::StmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTrueStmt(hawkParser::TrueStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubscriptExpr(hawkParser::SubscriptExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncCallExpr(hawkParser::FuncCallExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddrExpr(hawkParser::AddrExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXorExpr(hawkParser::XorExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParenExpr(hawkParser::ParenExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryExpr(hawkParser::UnaryExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLOrExpr(hawkParser::LOrExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTernaryExpr(hawkParser::TernaryExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPostfixExpr(hawkParser::PostfixExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelExpr(hawkParser::RelExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBitAndExpr(hawkParser::BitAndExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBraceExpr(hawkParser::BraceExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAccessExpr(hawkParser::AccessExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddSubExpr(hawkParser::AddSubExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPtrAccessExpr(hawkParser::PtrAccessExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLAndExpr(hawkParser::LAndExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelationalExpr(hawkParser::RelationalExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumExpr(hawkParser::NumExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitShiftExpr(hawkParser::ShiftExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrefixExpr(hawkParser::PrefixExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarExpr(hawkParser::VarExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqExpr(hawkParser::EqExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBitOrExpr(hawkParser::BitOrExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNotExpr(hawkParser::NotExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDerefExpr(hawkParser::DerefExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulDivExpr(hawkParser::MulDivExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionStmt(hawkParser::FunctionStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStmt(hawkParser::IfStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfBlock(hawkParser::IfBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElifBlock(hawkParser::ElifBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElseBlock(hawkParser::ElseBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileStmt(hawkParser::WhileStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForRangeStmt(hawkParser::ForRangeStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForEachStmt(hawkParser::ForEachStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDoWhileStmt(hawkParser::DoWhileStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStruct(hawkParser::StructContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace hawk
