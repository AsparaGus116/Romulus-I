#pragma once

#include <string>

enum class EntryType
{
	FUNCTION,
	VARIABLE,
	UNDEFINED
};

class StackEntry
{
protected:
	std::string identifier;
public:
	virtual EntryType getEntryType() const;

	std::string getIdentifier() const;

	virtual ~StackEntry() = default;

	virtual bool operator==(const StackEntry& other) const = 0;
};

