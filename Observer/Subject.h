#pragma once
#include "Observer.h"

#include <list>
using namespace std;
class Observer;
class Subject
{
public:
	virtual void Attach(Observer* ob)
	{
		m_obList.push_back(ob);
	}
	virtual void Detach(Observer* ob)
	{
		m_obList.remove(ob);
	}
	virtual void Notify()
	{
		for (auto& o : m_obList)
		{
			o->Update(this);
		}
	}
protected:
	list<Observer*> m_obList;
};


