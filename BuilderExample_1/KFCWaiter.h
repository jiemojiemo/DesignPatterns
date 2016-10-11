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
	Meal Construct()
	{
		m_combo->BuildStaleFood();
		m_combo->BuildDrink();
		return m_combo->GetMeal();
	}
private:
	Combo* m_combo;
};
