#pragma once
#include "MyElement.h"
#include <list>
using namespace std;
class Plate : public MyElement
{
public:
	virtual void Eat()
	{
		cout << "Start eat plate:" << endl;
		for (auto& iter : m_list)
		{
			iter->Eat();
		}
		cout << "End eat plate" << endl;
	}

	void Add(MyElement* ele)
	{
		m_list.push_back(ele);
	}

	void remove(MyElement* ele)
	{
		m_list.remove(ele);
	}

private:
	list<MyElement*> m_list;
};
