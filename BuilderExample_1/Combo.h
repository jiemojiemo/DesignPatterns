#pragma once
#include "Meal.h"
class Combo
{
	friend class KFCWaiter;
protected:
	Meal m_meal;
public:
	virtual void BuildStaleFood() = 0;
	virtual void BuildDrink() = 0;
private:
	Meal GetMeal()const { return m_meal; }
};
