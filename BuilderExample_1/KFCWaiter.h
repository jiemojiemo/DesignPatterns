#pragma once
#include "Combo.h"
class KFCWaiter
{
public:
	KFCWaiter(Combo* combo) :m_combo(combo) {}
	void SetCombe(Combo* combo)
	{
		m_combo = combo;
	}
	void Construct()
	{
		m_combo->BuildStaleFood();
		m_combo->BuildDrink();
	}
private:
	Combo* m_combo;
};
