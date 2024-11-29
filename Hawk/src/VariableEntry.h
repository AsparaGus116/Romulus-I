#pragma once
#include "StackEntry.h"
#include <stdint.h>
#include <string>

enum class VarType
{
	INT,
	BOOL,
	CHAR,
	PTR,
	ERROR
};

class VariableEntry : StackEntry
{
	std::string identifier;
	VarType type;
	uint16_t value;
public:
	VariableEntry() = default;
	VariableEntry(std::string m_id, VarType m_type);
	VariableEntry(std::string m_id, VarType m_type, uint16_t m_value);

	EntryType getEntryType();
};

