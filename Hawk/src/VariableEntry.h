#pragma once
#include "StackEntry.h"
#include "utils.h"
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

class VariableEntry : public StackEntry
{
	VarType type;
	uint16_t size; // how many addresses the variable takes up

	uint16_t location;
	Regs storedRegister;

	const EntryType entryType = EntryType::VARIABLE;

	uint16_t value = 0;

public:
	VariableEntry() = default;
	VariableEntry(std::string m_id, VarType m_type, uint16_t m_size = 1);

	EntryType getEntryType() const override;

	uint16_t getLocation() const;
	Regs getReg() const;
	uint16_t getSize() const;
	VarType getType() const;
	uint16_t getValue() const;

	void setLocation(uint16_t x);
	void setReg(Regs reg);
	void setSize(uint16_t s);
	void setValue (uint16_t x);

	bool operator==(const VariableEntry& other) const;

	bool operator==(const StackEntry& other) const override;

	VariableEntry& operator=(const VariableEntry& other);
};



