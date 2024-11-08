#pragma once

#include <cstdlib>
#include <fstream>



#define BORROW_IN 0
#define CARRY_IN 1
#define BORROW_OUT 2
#define CARRY_OUT 3

class Chip
{
	int id = -1;
	bool pins[4];
	bool pinVals[4] = { false, false, false, false };
	int inputs;
	int params[2];
	int result = 0;
	int opcode = 0;
	uint8_t output;

	void trimParams();
public:
	Chip() = default;
	Chip(int m_id);

	uint8_t compute();
	void setAddress(uint32_t address);
	void setOpcode(int m_opcode);
	void setCarry(bool b);
	void setBorrow(bool b);
	bool getCarry();
	bool getBorrow();
};