#pragma once
#include <string>
using namespace std;
class Meal
{
public:
	std::string StaleFood() const { return m_staleFood; }
	void StaleFood(const std::string& val) { m_staleFood = val; }
	std::string Drink() const { return m_drink; }
	void Drink(const std::string& val) { m_drink = val; }

private:
	string m_staleFood;
	string m_drink;
};