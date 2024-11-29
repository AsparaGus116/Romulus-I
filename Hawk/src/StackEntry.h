#pragma once

enum class EntryType
{
	FUNCTION,
	VARIABLE,
	UNDEFINED
};

class StackEntry
{
public:
	EntryType getEntryType();
};

