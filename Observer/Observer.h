#pragma once
#include "Subject.h"
class Subject;
class Observer
{
public:
	Observer(int key=0) :m_key(key) {}
	virtual void Update(Subject* sub) = 0
	{
		SetSubject(sub);
	}

	int GetKey()const { return m_key; }
	void SetSubject(Subject* sub) { m_sub = sub; }
protected:
	Subject* m_sub;
	int m_key;
};
