#pragma once

#include "Component.h"

#include <iostream>
using namespace std;

class ConcreteComponent : public Component
{
public:
	virtual void Operation()
	{
		cout << "ConcreteComponent";
	}
};