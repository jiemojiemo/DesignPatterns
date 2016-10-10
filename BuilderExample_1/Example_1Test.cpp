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
	waiter.Construct();
	auto m1 = com1->GetMeal();
	ShowMeal(m1);

	waiter.SetCombe(com2);
	waiter.Construct();
	auto m2 = com2->GetMeal();
	ShowMeal(m2);

	delete com1;
	delete com2;
}