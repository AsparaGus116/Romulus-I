#include "Memory.h"

std::array<VariableEntry, (1 << 16) - 4> Memory::mem = {};

int Memory::find(VariableEntry* v)
{
	for (int i = 0; i < mem.size(); i++)
	{
		if (*v == mem[i])
		{
			return i;
		}
	}
	return -1;
}

VariableEntry* Memory::get(int idx)
{
	return &mem[idx];
}

int Memory::storeVariable(VariableEntry& v)
{
	if (v.getLocation() != 0xFFFF)
	{
		return v.getLocation();
	}
	else
	{
		bool available = true;
		for (int i = 0; i < mem.size(); i++)
		{
			available = true;
			for (int j = 0; j < v.getSize(); j++)
			{
				if (mem[i + j].getSize() > 0)
				{
					available = false;
					break;
				}
			}
			if (available)
			{
				for (int j = 0; j < v.getSize(); j++)
				{
					mem[i + j] = v;
				}
				v.setLocation(i);
				return i;
			}
		}
		return -1;
	}

}

void Memory::erase(VariableEntry& v)
{
	if (v.getLocation() == -1)
	{
		return;
	}
	for (int i = v.getLocation(); i < std::min((size_t)(v.getLocation() + v.getSize()), mem.size()); i++)
	{
		mem[i] = {};
	}
}
