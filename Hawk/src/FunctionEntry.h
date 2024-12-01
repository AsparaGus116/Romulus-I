#include <vector>

#include "StackEntry.h"
#include "VariableEntry.h"

enum class ReturnType
{
	VOID,
	BOOL,
	CHAR,
	INT,
	PTR
};

#pragma once
class FunctionEntry : public StackEntry
{	
private:
	ReturnType ret;
	const EntryType entryType = EntryType::FUNCTION;
	std::vector<VariableEntry> params;
public:

	FunctionEntry(ReturnType m_ret, std::string m_name, std::vector<VariableEntry> m_params);
	FunctionEntry() = default;
	FunctionEntry(ReturnType m_ret, std::string m_name);

	VariableEntry getParam(int index);
	void setName(std::string m_name);
	void setReturnValue(ReturnType m_ret);
	void clearParams();
	void appendParam(const VariableEntry& param);

	EntryType getEntryType() const override;

	bool operator==(const FunctionEntry& other) const;

	bool operator==(const StackEntry& other) const override;
};

