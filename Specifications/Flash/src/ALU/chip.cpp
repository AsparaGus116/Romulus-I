#include "chip.h"

void Chip::trimParams()
{
	int mask = (1 << inputs) - 1;
	params[0] &= mask;
	params[1] &= mask;
}

Chip::Chip(int m_id):
	id{ m_id }
{	
	if (id == 1) // U1
	{
		pins[BORROW_IN] = false;
		pins[CARRY_IN] = true;
		pins[BORROW_OUT] = true;
		pins[CARRY_OUT] = false;
		inputs = 6;
	}
	else if (id == 2) // U2
	{
		pins[BORROW_IN] = true;
		pins[CARRY_IN] = true;
		pins[BORROW_OUT] = true;
		pins[CARRY_OUT] = true;
		inputs = 4;
	}
	else if (id == 3) // U3
	{
		pins[BORROW_IN] = true;
		pins[CARRY_IN] = false;
		pins[BORROW_OUT] = false;
		pins[CARRY_OUT] = true;
		inputs = 6;
	}
	trimParams();

}

uint8_t Chip::compute()
{
	switch (opcode)
	{
	case 0x0:
	case 0x1:
	case 0x2:
	case 0x3:
	case 0xC:
	case 0xD:
	case 0xE:
	case 0xF:
		// Non-arithmetic expressions
		result = params[0];
		break;
	case 0x4: // Bitwise OR
		result = params[0] | params[1];
		break;
	case 0x5: // bitwise NOT
		result = ~params[0];
		break;
	case 0x6: // bitwise AND
		result = params[0] & params[1];
		break;
	case 0x7: // bitwise XOR
		result = params[0] ^ params[1];
		break;
	case 0x8: // add
		result = params[0] + params[1] + pinVals[CARRY_IN];
		pinVals[CARRY_OUT] = (result >> inputs) & 1;
		break;
	case 0x9: // sub
		params[1] = ~params[1];
		trimParams();
		result = params[0] + params[1] + pinVals[CARRY_IN];
		pinVals[CARRY_OUT] = (result >> inputs) & 1;
		break;
	case 0xA: // logical NOT
		if (id == 3)
		{
			result = (params[0] || pinVals[BORROW_IN]) ? 0 : 1;
		}
		else
		{
			result = 0;
			pinVals[BORROW_OUT] = (!(!params[0]) | pinVals[BORROW_IN]) ? 1 : 0;
		}
		break;
	case 0xB: // right shift
		pinVals[BORROW_OUT] = params[0] & 1;
		params[0] >>= 1;
		params[0] |= (pinVals[BORROW_IN] << (inputs - 1));
		result = params[0];
		break;
	default:
		break;
	}

	if (id == 1 || id == 3)
	{
		output = result << (8 - inputs);
		if (id == 1)
		{
			output |= (pinVals[BORROW_OUT] & 1);
		}
		if (id == 3)
		{
			output |= (pinVals[CARRY_OUT] & 1);
		}
		return output;
	}
	else if (id == 2)
	{
		output = result << (8 - inputs);
		output |= ((pinVals[BORROW_OUT] & 1) << 1);
		output |= (pinVals[CARRY_OUT] & 1);
		return output;
	}
	else
	{
		return -1;
	}
}

void Chip::setAddress(uint32_t address)
{
	if (id == 1 || id == 3)
	{
		if (id == 1)
		{
			pinVals[CARRY_IN] = address & 1;
		}
		if (id == 3)
		{
			pinVals[BORROW_IN] = address & 1;
		}
		address >>= 1;
		int mask = (1 << inputs) - 1;
		params[1] = address & mask;
		address >>= inputs;
		params[0] = address & mask;
		address >>= inputs;
		opcode = address & 0xF;
	}
	else if (id == 2)
	{
		pinVals[CARRY_IN] = address & 1;
		address >>= 1;
		pinVals[BORROW_IN] = address & 1;
		address >>= 4;
		int mask = (1 << inputs) - 1;
		params[1] = address & mask;
		address >>= inputs;
		params[0] = address & mask;
		address >>= inputs;
		opcode = address & 0xF;
	}
}

void Chip::setOpcode(int m_opcode)
{
	opcode = m_opcode;
}

void Chip::setCarry(bool b)
{
	pinVals[CARRY_IN] = b;
}

void Chip::setBorrow(bool b)
{
	pinVals[BORROW_IN] = b;
}

bool Chip::getCarry()
{
	return pinVals[CARRY_OUT];
}

bool Chip::getBorrow()
{
	return pinVals[BORROW_OUT];
}
