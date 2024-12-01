#pragma once

#include <string>
#include <iostream>
#include <bitset>

//#include "LRU.h"

enum Format
{
	BIN,
	DEC,
	HEX,
	ERROR
};

enum Regs
{
	R0,
	R1,
	R2,
	R3,
	R4,
	R5,
	R6,
	R7,
	R8,
	R9,
	R10,
	R11,
	R12,
	R13,
	R14,
	R15,
	NIL
};

class utils
{
public:
	static int totalErrors;

	static int getTotalErrors();

	static void error(int lineNumber, int columnNumber, std::string message);

	static std::string loadImm(Regs reg, uint16_t imm, Format f = DEC, std::string comment = "");

	static std::string loadLabel(Regs reg, std::string label, std::string comment = "");

	static std::string loadReg(Regs left, Regs right, std::string comment = "");

	static std::string output(std::string command, std::string arg1, std::string arg2 = "", std::string arg3 = "", std::string comment = "");

	static std::string toString(Regs reg);
};

