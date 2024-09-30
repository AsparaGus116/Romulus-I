#include "Listener.h"

#include <iostream>
#include <vector>
#include <string>

	char Listener::toHex(int x)
	{
		x %= 16;
		if(x <= 9)
		{
			return x + '0';
		}
		else{
			return x + 'A' - 10;
		}
	}

	void Listener::enterProgram(romASMParser::ProgramContext * ctx)
	{
	}

	void Listener::exitProgram(romASMParser::ProgramContext * ctx)
	{
		if(firstPass)
		{
			firstPass = false;
		}
	}
	
	std::string Listener::toLower(std::string str)
	{
		std::string fin = "";
		for(int i = 0; i < str.size(); i++)
		{
			if(str[i] >= 'A' && str[i] <= 'Z')
			{
				fin += ('a' - 'A'); // 32? idk
			}
			else
			{
				fin += str[i];
			}
		}
		return fin;
	}

	int Listener::fromHex(std::string str)
	{
		int res = 0;
		str = toLower(str);
		std::cout << "STR: " << str << '\n';
		for(int i = 0; i < str.size(); i++)
		{
			res <<= 4;
			if(str[i] <= '9' && str[i] >= '0')
			{
				res |= str[i] - '0';
			}
			else if(str[i] >= 'a' && str[i] <= 'f')
			{
				res |= str[i] - 'a' + 10;
				std::cout << str[i] - 'a' + 10 << '\n';
			}
			else
			{
				std::cout << "ERR: Invalid hex literal";
			}	
			
			
		}
		std::cout << "RES: " << res << '\n';
		return res;
	}

	void Listener::output(int op, int rA, int rB, int rY, std::string comment)
	{
		outfile << toHex(op) << toHex(rA) << toHex(rB) << toHex(rY);
		if(comment.size() > 0)
		{
			outfile << " // " << comment;
		}
		outfile << '\n';
	}	
	
	void Listener::output(int x, std::string comment)
	{
		outfile << toHex((x >> 12) & 0xf);
		outfile << toHex((x >> 8) & 0xf);
		outfile << toHex((x >> 4) & 0xf);
		outfile << toHex((x >> 0) & 0xf);
		
		if(comment.size() > 0)
		{
			outfile << " // " << comment;
		}
		outfile << '\n';	
	}

	void Listener::enterExpr(romASMParser::ExprContext * ctx)
	{
		auto regs = ctx->REG();
		int op = 0;
		int rA = 0;
		int rB = 0;
		int rY = 0;
		if(firstPass)
		{
			if(ctx->LABEL())
			{
				
			}
		}
		else
		{
			
			if(ctx->MOV())
			{
				std::cout << "Triggered MOV instruction:\n";
				
				int imm = 0;
				if(regs.size() == 2)
				{
					op = 0;
					rA = parseReg(regs[0]);
					rY = parseReg(regs[1]);
					
				}
				else
				{
					op = 1;
					rY = parseReg(regs[0]);
					if(ctx->IMM())
					{
						std::string str = (ctx->IMM())->getText();
						imm = atoi(str.c_str());
					}
					else if(ctx->HEX())
					{
						std::string str = (ctx->HEX())->getText();
						str = str.substr(2, str.size() - 2);
						imm = fromHex(str.c_str());
					}
					
				}
				std::cout << "Opcode: " << op << '\n';
				std::cout << "rA: " << rA << '\n';
				std::cout << "rB: " << rB << '\n';
				std::cout << "rY: " << rY << '\n';
				output(op, rA, rB, rY);
				if(op == 1)
				{
					output(imm);
				}
			}
			else if(ctx->STR())
			{
				op = 2;
				rA = parseReg(regs[0]);
				rB = parseReg(regs[1]);
				output(op, rA, rB, rY);
			}
			else if(ctx->LDA())
			{
				op = 3;
				rA = parseReg(regs[0]);
				rY = parseReg(regs[1]);
				output(op, rA, rB, rY);
			}
			else if(ctx->OR())
			{
				op = 4;
				rA = parseReg(regs[0]);
				rB = parseReg(regs[1]);
				if(regs.size() > 2)
				{
					rY = parseReg(regs[2]);
				}
				else
				{
					rY = rA;
				}
				output(op, rA, rB, rY);
			}
			else if(ctx->INV())
			{
				op = 5;
				rA = parseReg(regs[0]);
				if(regs.size() > 1)
				{
					rY = parseReg(regs[1]);
				}
				else
				{
					rY = rA; 
				}
				output(op, rA, rB, rY);
			}
			else if(ctx->AND())
			{
				op = 6;
				rA = parseReg(regs[0]);
				rB = parseReg(regs[1]);
				if(regs.size() > 2)
				{
					rY = parseReg(regs[2]);
				}
				else
				{
					rY = rA;
				}
				output(op, rA, rB, rY);
			}
			else if(ctx->XOR())
			{
				op = 7;
				rA = parseReg(regs[0]);
				rB = parseReg(regs[1]);
				if(regs.size() > 2)
				{
					rY = parseReg(regs[2]);
				}
				else
				{
					rY = rA;
				}
				output(op, rA, rB, rY);
			}
			else if(ctx->ADD())
			{
				op = 8;
				rA = parseReg(regs[0]);
				rB = parseReg(regs[1]);
				if(regs.size() > 2)
				{
					rY = parseReg(regs[2]);
				}
				else
				{
					rY = rA;
				}
				output(op, rA, rB, rY);
			}
			else if(ctx->SUB())
			{
				op = 9;
				rA = parseReg(regs[0]);
				rB = parseReg(regs[1]);
				if(regs.size() > 2)
				{
					rY = parseReg(regs[2]);
				}
				else
				{
					rY = rA;
				}
				output(op, rA, rB, rY);
			}
			else if(ctx->NOT())
			{
				op = 10;
				rA = parseReg(regs[0]);
				if(regs.size() > 1)
				{
					rY = parseReg(regs[1]);
				}
				else
				{
					rY = rA; 
				}
				output(op, rA, rB, rY);
			}
			else if(ctx->SHR())
			{
				op = 11;
				rA = parseReg(regs[0]);
				if(regs.size() > 1)
				{
					rY = parseReg(regs[1]);
				}
				else
				{
					rY = rA; 
				}
				output(op, rA, rB, rY);
			}
			else if(ctx->SHL()) // replicate add instruction
			{
				op = 8;
				rA = parseReg(regs[0]);
				rB = rA;
				if(regs.size() > 1)
				{
					rY = parseReg(regs[1]);
				}
				else
				{
					rY = rA; 
				}
				output(op, rA, rB, rY);
			}
			else if(ctx->PUSH())
			{
				op = 12;
				rA = parseReg(regs[0]);
				output(op, rA, 0x0, 0x0);
			}
			else if(ctx->CALL())
			{
				op = 12;
				rA = parseReg(regs[0]);
				output(op, 0x0, 0b1000, 0x0); // push PC to stack
				output(0xE, rA, 0x0, 0x0); // unconditional jump to M[rA]
			}
			else if(ctx->POP())
			{
				op = 13;
				rY = parseReg(regs[0]);
				output(op, 0x0, 0x0, rY);
			}
			else if(ctx->RET())
			{
				op = 13;
				output(op, 0x0, 0b1000, 0x0);
			}
			else if(ctx->JMP())
			{
				op = 14;
				rA = parseReg(regs[0]);
				output(op, rA, 0x0, 0x0);
			}
			else if(ctx->JEZ() || ctx->JNZ() || ctx->JGZ() || ctx->JLZ())
			{
				op = 15;
				rA = parseReg(regs[0]);
				rB = parseReg(regs[1]);
				int flags = 0;
				if(ctx->JEZ())
				{
					flags = 0b0001;
				}
				else if(ctx->JNZ())
				{
					flags = 0b0010;
				}
				else if(ctx->JLZ())
				{
					flags = 0b0100;
				}
				else if(ctx->JGZ())
				{
					flags = 0b1000;
				}
				output(op, rA, rB, flags);
			}
		}
	
	}

	int Listener::parseReg(antlr4::tree::TerminalNode* node)
	{
	  std::string text = node->getText();
	  text = text.substr(1, text.size() - 1);
	  std::cout << std::stoi(text) << '\n';
	  return std::stoi(text);
	}
	
	