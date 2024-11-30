#include "utils.h"

int utils::totalErrors{ 0 };

int utils::getTotalErrors()
{
	return totalErrors;
}

void utils::error(int lineNumber, int columnNumber, std::string message)
{
	std::cout << "ERROR<" << lineNumber << ":" << columnNumber << "> " << message << '\n';
	utils::totalErrors++;
}

std::string utils::loadImm(Regs reg, uint16_t imm, Format f, std::string comment)
{
	std::string ret = "MOV ";
	char buf[64] = { 0 };
	if (f == Format::DEC)
	{
		std::snprintf(buf, 10, "%d", imm);
	}
	else if (f == Format::BIN)
	{
		std::bitset<32> bin{ imm };
		int bufIdx = 2;
		bool output = false;
		buf[0] = '0';
		buf[1] = 'b';
		for (int i = 31; i >= 0; i--)
		{
			if (bin[i] == 1)
			{
				output = true;
			}
			if (output)
			{
				buf[bufIdx] = bin[i] + '0';
				++bufIdx;
			}
		}
		if (bufIdx == 2)
		{
			buf[2] = '0';
		}
	}
	else if (f == Format::HEX)
	{
		std::snprintf(buf, 7, "0x%04x", imm);
		for (int i = 2; i < 7; i++)
		{
			buf[i] = std::toupper(buf[i]);
		}
	}
	ret += buf;
	ret += ", " + toString(reg);
	if (comment.size() > 0)
	{
		ret += " // " + comment;
	}
	ret += '\n';
	return ret;
}

std::string utils::toString(Regs reg)
{
	switch (reg)
	{
	case R0:
		return "R0";
	case R1:
		return "R1";
	case R2:
		return "R2";
	case R3:
		return "R3";
	case R4:
		return "R4";
	case R5:
		return "R5";
	case R6:
		return "R6";
	case R7:
		return "R7";
	case R8:
		return "R8";
	case R9:
		return "R9";
	case R10:
		return "R10";
	case R11:
		return "R11";
	case R12:
		return "R12";
	case R13:
		return "R13";
	case R14:
		return "R14";
	case R15:
		return "R15";
	}
}
