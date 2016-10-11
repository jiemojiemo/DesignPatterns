#pragma once
#include "Component.h"
#include <iostream>
using namespace std;
class Leaf : public Component
{
public:
	Leaf(string name) :Component(name) {}

	virtual void Add(Component* com)
	{
		cout << "Leaf cannot add" << endl;
	}
	virtual void Remove(Component* com)
	{
		cout << "Leaf cannot remove" << endl;
	}
	virtual Component* GetChild(int index)
	{
		cout << "Leaf cannot get child" << endl;
		return nullptr;
	}
	virtual void Display()
	{
		cout << '-';
		cout << this->m_name << endl;
	}
};