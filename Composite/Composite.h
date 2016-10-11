#pragma once
#include "Component.h"
#include <list>
#include <iostream>
using namespace std;
class Composite : public Component
{
public:
	Composite(string name) :Component(name) {}

	virtual void Add(Component* com)
	{
		m_list.push_back(com);
	}
	virtual void Remove(Component* com)
	{
		m_list.remove(com);
	}
	virtual Component* GetChild(int index)
	{
		auto iter = m_list.begin();
		advance(iter, index);
		return *iter;
	}
	virtual void Display()
	{
		cout << '-';
		for (auto& iter : m_list)
		{
			iter->Display();
		}
	}

private:
	list<Component*> m_list;
};
