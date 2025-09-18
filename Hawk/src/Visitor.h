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
#include "Memory.h"

#include <deque>
#include <map>

using namespace antlr4;
using namespace hawk;

class Visitor : hawkParserBaseVisitor
{
	// R4 used to test conditionals

	LRU<VariableEntry*> varCache{ { Regs::R5, Regs::R6, Regs::R7, Regs::R8, Regs::R9, Regs::R10 } };

	LRU<std::string> labelCache{ {Regs::R11, Regs::R12} };

	LRU<uint16_t> immCache{ {Regs::R13, Regs::R14, Regs::R15} };

	uint16_t numLoops = 0;

	std::deque<StackEntry*> stack;

	std::ofstream out;

	std::map<FunctionEntry, std::string> functionOutputs;
public:

	VariableEntry* findVariable(std::string id);

	LRU<VariableEntry*> getVarCache();

	LRU<uint16_t> getImmCache();

	Visitor();

	Regs processVar(VariableEntry* v);

	std::any visitProgram(hawkParser::ProgramContext* ctx) override;

	std::any visitStmt(hawkParser::StmtContext* ctx) override;

	std::any visitFunctionStmt(hawkParser::FunctionStmtContext* ctx) override;

	std::any visitParameter(hawkParser::ParameterContext* ctx) override;

	std::any visitExprStmt(hawkParser::ExprStmtContext* ctx) override;

	std::any visitNumber(hawkParser::NumberContext* ctx) override;

	std::any visitPrefixExpr(hawkParser::PrefixExprContext* ctx) override;

	std::any visitPrefixStmt(hawkParser::PrefixStmtContext* ctx) override;

	std::any visitPostfixStmt(hawkParser::PostfixStmtContext* ctx) override;

	std::any visitAssignStmt(hawkParser::AssignStmtContext* ctx) override;

	std::any visitVarExpr(hawkParser::VarExprContext* ctx) override;

	std::any visitUnaryExpr(hawkParser::UnaryExprContext* ctx) override;

	std::any visitRelationalExpr(hawkParser::RelationalExprContext* ctx) override;

	std::string loop(VariableEntry* times, std::string block);

	std::string loopImm(uint16_t times, std::string block);
};