#include "KFCWaiter.h"
#include "Combo_A.h"
#include "Combo_B.h"
#include "Meal.h"

#include <iostream>
#include <memory>
using namespace std;

void ShowMeal(const Meal& meal)
{
	cout << meal.StaleFood() << endl;
	cout << meal.Drink() << endl;
}

int main()
{
	Combo* com1 = new Combo_A();
	Combo* com2 = new Combo_B();

	KFCWaiter waiter(com1);
	auto m1 = waiter.Construct();
	ShowMeal(m1);

	waiter.SetCombe(com2);
	auto m2 = waiter.Construct();
	ShowMeal(m2);

	delete com1;
	delete com2;
}