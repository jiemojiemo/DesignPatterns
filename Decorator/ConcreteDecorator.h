#pragma once
#include "Decorator.h"
class ConcreteDecorator : public Decorator
{
public:
	ConcreteDecorator(Component* com) :Decorator(com) {}

	virtual void Operation()
	{
		cout << "(";
		Decorator::Operation();
		cout << ")";
	}
};