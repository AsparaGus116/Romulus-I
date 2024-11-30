#pragma once

#include <string>
#include <iostream>
#include <bitset>

#include "LRU.h"

enum Format
{
	BIN,
	DEC,
	HEX,
	ERROR
};

class utils
{
public:
	static int totalErrors;

	static int getTotalErrors();

	static void error(int lineNumber, int columnNumber, std::string message);

	static std::string loadImm(Regs reg, uint16_t imm, Format f = DEC, std::string comment = "");

	static std::string toString(Regs reg);
};

