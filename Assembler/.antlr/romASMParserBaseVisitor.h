
// Generated from romASMParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "romASMParserVisitor.h"


/**
 * This class provides an empty implementation of romASMParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  romASMParserBaseVisitor : public romASMParserVisitor {
public:

  virtual std::any visitProgram(romASMParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr(romASMParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }


};

