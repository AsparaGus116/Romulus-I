
// Generated from hawkParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "hawkParserListener.h"


namespace hawk {

/**
 * This class provides an empty implementation of hawkParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  hawkParserBaseListener : public hawkParserListener {
public:

  virtual void enterProgram(hawkParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(hawkParser::ProgramContext * /*ctx*/) override { }

  virtual void enterType(hawkParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(hawkParser::TypeContext * /*ctx*/) override { }

  virtual void enterOp(hawkParser::OpContext * /*ctx*/) override { }
  virtual void exitOp(hawkParser::OpContext * /*ctx*/) override { }

  virtual void enterAssignOp(hawkParser::AssignOpContext * /*ctx*/) override { }
  virtual void exitAssignOp(hawkParser::AssignOpContext * /*ctx*/) override { }

  virtual void enterNumber(hawkParser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(hawkParser::NumberContext * /*ctx*/) override { }

  virtual void enterCond(hawkParser::CondContext * /*ctx*/) override { }
  virtual void exitCond(hawkParser::CondContext * /*ctx*/) override { }

  virtual void enterStmt(hawkParser::StmtContext * /*ctx*/) override { }
  virtual void exitStmt(hawkParser::StmtContext * /*ctx*/) override { }

  virtual void enterTrueStmt(hawkParser::TrueStmtContext * /*ctx*/) override { }
  virtual void exitTrueStmt(hawkParser::TrueStmtContext * /*ctx*/) override { }

  virtual void enterVarExpr(hawkParser::VarExprContext * /*ctx*/) override { }
  virtual void exitVarExpr(hawkParser::VarExprContext * /*ctx*/) override { }

  virtual void enterArithmeticExpr(hawkParser::ArithmeticExprContext * /*ctx*/) override { }
  virtual void exitArithmeticExpr(hawkParser::ArithmeticExprContext * /*ctx*/) override { }

  virtual void enterRelationalExpr(hawkParser::RelationalExprContext * /*ctx*/) override { }
  virtual void exitRelationalExpr(hawkParser::RelationalExprContext * /*ctx*/) override { }

  virtual void enterParenExpr(hawkParser::ParenExprContext * /*ctx*/) override { }
  virtual void exitParenExpr(hawkParser::ParenExprContext * /*ctx*/) override { }

  virtual void enterNumExpr(hawkParser::NumExprContext * /*ctx*/) override { }
  virtual void exitNumExpr(hawkParser::NumExprContext * /*ctx*/) override { }

  virtual void enterFunctionStmt(hawkParser::FunctionStmtContext * /*ctx*/) override { }
  virtual void exitFunctionStmt(hawkParser::FunctionStmtContext * /*ctx*/) override { }

  virtual void enterIfStmt(hawkParser::IfStmtContext * /*ctx*/) override { }
  virtual void exitIfStmt(hawkParser::IfStmtContext * /*ctx*/) override { }

  virtual void enterIfBlock(hawkParser::IfBlockContext * /*ctx*/) override { }
  virtual void exitIfBlock(hawkParser::IfBlockContext * /*ctx*/) override { }

  virtual void enterElifBlock(hawkParser::ElifBlockContext * /*ctx*/) override { }
  virtual void exitElifBlock(hawkParser::ElifBlockContext * /*ctx*/) override { }

  virtual void enterElseBlock(hawkParser::ElseBlockContext * /*ctx*/) override { }
  virtual void exitElseBlock(hawkParser::ElseBlockContext * /*ctx*/) override { }

  virtual void enterWhileStmt(hawkParser::WhileStmtContext * /*ctx*/) override { }
  virtual void exitWhileStmt(hawkParser::WhileStmtContext * /*ctx*/) override { }

  virtual void enterForRange(hawkParser::ForRangeContext * /*ctx*/) override { }
  virtual void exitForRange(hawkParser::ForRangeContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace hawk
