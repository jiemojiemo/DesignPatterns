#pragma once
#include "Meal.h"
class Combo
{
protected:
	Meal m_meal;

public:
	virtual void BuildStaleFood() = 0;
	virtual void BuildDrink() = 0;
	Meal GetMeal()const { return m_meal; }
};
