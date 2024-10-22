
// Generated from hawkParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "hawkParser.h"


namespace hawk {

/**
 * This interface defines an abstract listener for a parse tree produced by hawkParser.
 */
class  hawkParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(hawkParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(hawkParser::ProgramContext *ctx) = 0;

  virtual void enterType(hawkParser::TypeContext *ctx) = 0;
  virtual void exitType(hawkParser::TypeContext *ctx) = 0;

  virtual void enterOp(hawkParser::OpContext *ctx) = 0;
  virtual void exitOp(hawkParser::OpContext *ctx) = 0;

  virtual void enterAssignOp(hawkParser::AssignOpContext *ctx) = 0;
  virtual void exitAssignOp(hawkParser::AssignOpContext *ctx) = 0;

  virtual void enterNumber(hawkParser::NumberContext *ctx) = 0;
  virtual void exitNumber(hawkParser::NumberContext *ctx) = 0;

  virtual void enterCond(hawkParser::CondContext *ctx) = 0;
  virtual void exitCond(hawkParser::CondContext *ctx) = 0;

  virtual void enterStmt(hawkParser::StmtContext *ctx) = 0;
  virtual void exitStmt(hawkParser::StmtContext *ctx) = 0;

  virtual void enterTrueStmt(hawkParser::TrueStmtContext *ctx) = 0;
  virtual void exitTrueStmt(hawkParser::TrueStmtContext *ctx) = 0;

  virtual void enterVarExpr(hawkParser::VarExprContext *ctx) = 0;
  virtual void exitVarExpr(hawkParser::VarExprContext *ctx) = 0;

  virtual void enterArithmeticExpr(hawkParser::ArithmeticExprContext *ctx) = 0;
  virtual void exitArithmeticExpr(hawkParser::ArithmeticExprContext *ctx) = 0;

  virtual void enterRelationalExpr(hawkParser::RelationalExprContext *ctx) = 0;
  virtual void exitRelationalExpr(hawkParser::RelationalExprContext *ctx) = 0;

  virtual void enterParenExpr(hawkParser::ParenExprContext *ctx) = 0;
  virtual void exitParenExpr(hawkParser::ParenExprContext *ctx) = 0;

  virtual void enterNumExpr(hawkParser::NumExprContext *ctx) = 0;
  virtual void exitNumExpr(hawkParser::NumExprContext *ctx) = 0;

  virtual void enterFunctionStmt(hawkParser::FunctionStmtContext *ctx) = 0;
  virtual void exitFunctionStmt(hawkParser::FunctionStmtContext *ctx) = 0;

  virtual void enterIfStmt(hawkParser::IfStmtContext *ctx) = 0;
  virtual void exitIfStmt(hawkParser::IfStmtContext *ctx) = 0;

  virtual void enterIfBlock(hawkParser::IfBlockContext *ctx) = 0;
  virtual void exitIfBlock(hawkParser::IfBlockContext *ctx) = 0;

  virtual void enterElifBlock(hawkParser::ElifBlockContext *ctx) = 0;
  virtual void exitElifBlock(hawkParser::ElifBlockContext *ctx) = 0;

  virtual void enterElseBlock(hawkParser::ElseBlockContext *ctx) = 0;
  virtual void exitElseBlock(hawkParser::ElseBlockContext *ctx) = 0;

  virtual void enterWhileStmt(hawkParser::WhileStmtContext *ctx) = 0;
  virtual void exitWhileStmt(hawkParser::WhileStmtContext *ctx) = 0;

  virtual void enterForRange(hawkParser::ForRangeContext *ctx) = 0;
  virtual void exitForRange(hawkParser::ForRangeContext *ctx) = 0;


};

}  // namespace hawk
