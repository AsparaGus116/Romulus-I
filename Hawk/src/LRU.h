#pragma once

#include <vector>
#include <algorithm>

#include "utils.h"
#include "Memory.h"


template <typename T>
class LRU
{
	std::vector<Regs> availableRegs;

	std::vector<std::pair<Regs, T>> lru;

	int max_size;

	bool store;

public:
	LRU(std::vector<Regs> regs, bool m_store = false) :
		availableRegs{ regs }
	{
		max_size = availableRegs.size();
		store = m_store;
	}

	T getEvicted(T next)
	{
		if (find(next) != Regs::NIL || lru.size() < max_size)
		{
			return NULL;
		}
		return lru[lru.size() - 1].second;
	}

	int getPriority(T val)
	{
		for (int i = 0; i < lru.size(); i++)
		{
			if (lru[i].second == val)
			{
				return i;
			}
		}
		return -1;
	}

	T find(Regs reg)
	{
		for (int i = 0; i < lru.size(); i++)
		{
			if (lru[i].first == reg)
			{
				return lru[i].second;
			}
		}
		return NULL;
	}

	Regs find(T entry)
	{
		for (int i = 0; i < lru.size(); i++)
		{
			if (lru[i].second == entry)
			{
				return lru[i].first;
			}
		}
		return Regs::NIL;
	}

	Regs process(T val)
	{
		for (int i = 0; i < lru.size(); i++)
		{
			if (lru[i].second == val) // reprioritize value already in cache
			{
				std::pair<Regs, T> entry{ lru[i].first, lru[i].second };
				lru.erase(lru.begin() + i);
				lru.insert(lru.begin(), entry);
				return lru[0].first;
			}
		}
		std::vector<Regs> usedRegs;

		std::vector<Regs> usableRegs;

		for (int i = 0; i < lru.size(); i++)
		{
			usedRegs.push_back(lru[i].first);
		}

		for (auto reg : availableRegs)
		{
			if (std::find(usedRegs.begin(), usedRegs.end(), reg) == usedRegs.end())
			{
				usableRegs.push_back(reg);
			}
		}

		if (usableRegs.size() > 0)
		{
			lru.insert(lru.begin(), {usableRegs[0], val});
			return usableRegs[0];
		}
		else
		{
			Regs reg = lru[lru.size() - 1].first;
			if (store)
			{
				if constexpr (std::is_same_v<T, VariableEntry*>) {
					Memory::storeVariable(*lru[lru.size() - 1].second);
				}
			}
			lru.pop_back();
			if (store)
			{
				if constexpr (std::is_same_v<T, VariableEntry*>) {
					if (!Memory::find(val))
					{
						lru.insert(lru.begin(), { reg, val });
					}
					else
					{
						lru.insert(lru.begin(), { reg, Memory::get(Memory::find(val)) });
					}
				}
				
			}
			else
			{
				lru.insert(lru.begin(), { reg, val });
			}
			
			return reg;
		}
		return Regs::NIL;

	}
};