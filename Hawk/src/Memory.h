#pragma once

#include "VariableEntry.h"
#include <array>
#include <algorithm>


static class Memory
{
	static std::array<VariableEntry, (1 << 16) - 4> mem;

public:
	static int find(VariableEntry* v);

	static VariableEntry* get(int idx);

	static int storeVariable(VariableEntry& v);

	static void erase(VariableEntry& v);
};

