#pragma once
#include "Combo.h"

class Combo_A : public Combo
{
public:
	virtual void BuildStaleFood()
	{
		this->m_meal.StaleFood("Hamburger");
	}
	virtual void BuildDrink()
	{
		this->m_meal.Drink("Coke");
	}
};
