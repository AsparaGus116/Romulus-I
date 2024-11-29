#pragma once

#include "antlr4-runtime.h"
#include "hawkLexer.h"
#include "hawkParser.h"
#include "hawkParserBaseVisitor.h"
#include "hawkParserVisitor.h"
#include "StackEntry.h"
#include "FunctionEntry.h"
#include "VariableEntry.h"
#include "utils.h"
#include "LRU.h"

#include <stack>
#include <map>

using namespace antlr4;
using namespace hawk;

class Visitor : hawkParserBaseVisitor
{
	LRU<VariableEntry> varCache{ { Regs::R5, Regs::R6, Regs::R7, Regs::R8, Regs::R9, Regs::R10, Regs::R11 } };

	LRU<uint16_t> immCache{ {Regs::R12, Regs::R13, Regs::R14, Regs::R15} };

	std::stack<StackEntry> stack;

	std::ofstream out;

	std::map<FunctionEntry, std::string> functionOutputs;
public:
	Visitor();

	std::any visitProgram(hawkParser::ProgramContext* ctx) override;

	std::any visitStmt(hawkParser::StmtContext* ctx) override;

	std::any visitFunctionStmt(hawkParser::FunctionStmtContext* ctx) override;

	std::any visitParameter(hawkParser::ParameterContext* ctx) override;

	std::any visitExprStmt(hawkParser::ExprStmtContext* ctx) override;

	std::any visitNumber(hawkParser::NumberContext* ctx) override;
};