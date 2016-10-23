#pragma once
#include "Observer.h"
#include <iostream>
using namespace std;
class ConcreteObserver : public Observer
{
public:
	ConcreteObserver(int key = 0) :Observer(key) {}
	virtual void Update(Subject* sub)
	{
		Observer::Update(sub);
		cout << GetKey() << "I do update\n";
	}
};
