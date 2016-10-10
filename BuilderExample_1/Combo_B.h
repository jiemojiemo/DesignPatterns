#pragma once
#include "Combo.h"

class Combo_B : public Combo
{
public:
	virtual void BuildStaleFood()
	{
		this->m_meal.StaleFood("Chicken Rolls");
	}
	virtual void BuildDrink()
	{
		this->m_meal.Drink("Juice");
	}
};
