
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

  virtual std::any visitOp(hawkParser::OpContext *ctx) override {
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

  virtual std::any visitVarExpr(hawkParser::VarExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArithmeticExpr(hawkParser::ArithmeticExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelationalExpr(hawkParser::RelationalExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParenExpr(hawkParser::ParenExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumExpr(hawkParser::NumExprContext *ctx) override {
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

  virtual std::any visitForRange(hawkParser::ForRangeContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace hawk
