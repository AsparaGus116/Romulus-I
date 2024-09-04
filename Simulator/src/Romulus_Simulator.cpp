#include <iostream>
#include <cctype>
#include <string>
#include <fstream>
#include <array>

#include "Format.h"
#include "Utils.h"

#define INSTRUCTION_RAM_SIZE 65536
#define DATA_RAM_SIZE 65536
#define STACK_RAM_SIZE 65536
#define NUM_REGS 16

void printHelpMenu();

std::array<uint16_t, INSTRUCTION_RAM_SIZE> instructions;
std::array<uint16_t, DATA_RAM_SIZE> data;
std::array<uint16_t, STACK_RAM_SIZE> stack;

std::array<uint16_t, NUM_REGS> regs;

uint16_t pc = 0;
uint16_t rsp = 0;

std::string filename;
std::ifstream file;

int main(int argc, char* argv[])
{
	for (int i = 0; i < argc; i++)
	{
		std::string str = argv[i];
		for (auto c : str)
		{
			str[i] = tolower(str[i]);
		}
		if (str.compare("-h") == 0 ||
			str.compare("-help") == 0 ||
			str.compare("--help") == 0
			)
		{
			printHelpMenu();
			return 0;
		}
		if (str.compare("-f") == 0)
		{
			filename = argv[i + 1];
		}

	}

	utils::clearTerminal();
	
	if (filename.size() != 0) // if file was input in cmd line params
	{
		file.open(filename, std::ios::in);

		if (!file.good())
		{
			std::cout << "Invalid filename. Please enter valid filename.\n";
			filename = "";
		}
	}

	if (filename.size() == 0) // if file wasn't input in cmd line params
	{
		while (filename.size() == 0)
		{
			std::cout << "Enter input filename: ";
			std::cin >> filename;
			file.open(filename, std::ios::in);
			if (!file.good())
			{
				utils::clearTerminal();
				filename = "";
				std::cout << "Invalid filename; please try again.\n";
			}
		}
	}

	int curPtr = 0;
	while (file.good())
	{
		std::string instr;
		file >> instr;
		if (instr.size() == 0)
			break;
		int x = utils::fromHex(instr);
		if (x >= 65536)
		{
			std::cout << "WARNING: Instruction at address " << utils::toHex(curPtr, 4) << "over 0xFFFF. Defaulting to value 0x0000.\n";
		}
		instructions[curPtr] = static_cast<uint16_t>(x);
		curPtr++;
	}

	std::string menuStr = "";
	int steps = 0;
	std::cout << "Type a number to step that many times, (v) to view the CPU's state, or (q) to quit.\n>> ";
	std::cin >> menuStr;
	for (int i = 0; i < menuStr.size(); i++)
	{
		menuStr[i] = tolower(menuStr[i]);
	}
	try
	{
		steps = std::stoi(menuStr);
	}
	catch (std::invalid_argument)
	{
		if (menuStr.find('v') != std::string::npos)
		{
			//printState();
		}
		else if (menuStr.find('q') != std::string::npos)
		{
			std::cout << "Exiting...\n";
			return 0;
		}
	}
	while (steps <= 0 && steps != -1)
	{
		std::cout << "Invalid step number. Please try again.\n";
		std::cout << "Type a number to step that many times, (v) to view the CPU's state, or (q) to quit.\n>> ";
		std::cin >> menuStr;
		for (int i = 0; i < menuStr.size(); i++)
		{
			menuStr[i] = tolower(menuStr[i]);
		}
		try
		{
			steps = std::stoi(menuStr);
		}
		catch (std::invalid_argument)
		{
			if (menuStr.find('v') != std::string::npos)
			{
				//printState();
			}
			else if (menuStr.find('q') != std::string::npos)
			{
				std::cout << "Exiting...\n";
				return 0;
			}
		}
	}

	for (auto instr : instructions)
	{
		uint16_t instr = instructions[pc];
		int opcode = (instr & 0xf000) >> 12;
		int rA = (instr & 0x0f00) >> 8;
		int rB = (instr & 0x00f0) >> 4;
		int rY = (instr & 0x000f);
		bool flag = false;

		switch (opcode)
		{
		case 0x0: // Register - Register
			regs[rY] = regs[rA];
			++pc;
			break;
		case 0x1: // Immediate - Register
			regs[rY] = instructions[pc + 1];
			pc += 2;
			break;
		case 0x2: // Register - Memory
			data[regs[rB]] = regs[rA];
			++pc;
			break;
		case 0x3: // Memory - Register
			regs[rY] = data[regs[rA]];
			++pc;
			break;
		case 0x4: // Bitwise OR
			regs[rY] = regs[rA] | regs[rB];
			++pc;
			break;
		case 0x5: // Bitwise NOT
			regs[rY] = ~regs[rA];
			++pc;
			break;
		case 0x6: // Bitwise AND
			regs[rY] = regs[rA] & regs[rB];
			++pc;
			break;
		case 0x7: // Bitwise XOR
			regs[rY] = regs[rA] ^ regs[rB];
			++pc;
			break;
		case 0x8: // Addition
			regs[rY] = regs[rA] + regs[rB];
			++pc;
			break;
		case 0x9: // Subtraction
			regs[rY] = regs[rA] - regs[rB];
			++pc;
			break;
		case 0xA: // Logical NOT
			regs[rY] = (regs[rA] == 0) ? 1 : 0;
			++pc;
			break;
		case 0xB: // Logical Right Shift
			regs[rY] = regs[rA] >> 1;
			++pc;
			break;
		case 0xC: // Push
			flag = (bool)((instr & 0x0010) >> 7);
			stack[rsp] = flag ? pc : regs[rA];
			++rsp;
			++pc;
			break;
		case 0xD: // Pop
			flag = (bool)((instr & 0x0010) >> 7);
			--rsp;
			if (flag)
			{
				pc = stack[rsp];
			}
			else
			{
				regs[rY] = stack[rsp];
			}
			++pc;
			break;
		case 0xE: // Unconditional Jump
			pc = regs[rA];
			break; // note: PC does NOT increment after jumps
		case 0xF: // Conditional Jump
			bool jump = false;
			
			switch (rY)
			{
			case 0:
				if (regs[rB] == 0) jump = true;
				break; // check if rB == 0
			case 1:
				if (regs[rB] != 0) jump = true;
				break; // check if rB != 0
			case 2:
				if (regs[rB] & 0x1000) jump = true;
				break; // check if rB < 0
			case 3:
				if (regs[rB] != 0 && ((regs[rB] & 0x1000) == 0)) jump = true;
				break; // check if rB > 0
			}
			if (jump)
			{
				pc = regs[rA];
			}
			else
			{
				++pc;
			}
			break;
		}
	}

}

void printState()
{
	for (int j = 0; j < NUM_REGS / 4; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			std::cout << "r" << i << ": " << utils::toHex(regs[i], 4) << '\t';
		}
		std::cout << '\n';
	}

	std::cout << "pc: " << utils::toHex(pc, 4) << '\t';
	std::cout << "rsp: " << utils::toHex(rsp, 4) << '\t';
	std::cout << '\n';
}

void printHelpMenu()
{
#if defined(__linux__)
	std::cout << "SYNTAX: ./rom_sim [-f input.txt]\n";
#elif _WIN32
	std::cout << "SYNTAX: rom_sim.exe [-f input.txt]\n";
#endif
	std::cout << "-f: Specify input file\n";
	//std::cout << "--dbg: enable step-through mode\n";
	std::cout << "Specify -h or --help for this menu.\n\n";
}