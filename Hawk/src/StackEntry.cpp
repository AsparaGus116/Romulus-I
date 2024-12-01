#include "StackEntry.h"

EntryType StackEntry::getEntryType() const
{
    return EntryType::UNDEFINED;
}

std::string StackEntry::getIdentifier() const
{
    return identifier;
}
