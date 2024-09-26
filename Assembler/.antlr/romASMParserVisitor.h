
// Generated from romASMParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "romASMParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by romASMParser.
 */
class  romASMParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by romASMParser.
   */
    virtual std::any visitProgram(romASMParser::ProgramContext *context) = 0;

    virtual std::any visitExpr(romASMParser::ExprContext *context) = 0;


};

