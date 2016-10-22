#pragma once

#include "Component.h"

class Decorator : public Component
{
public:
	Decorator(Component* com) :m_com(com) {}

	virtual void Operation()
	{
		m_com->Operation();
	}

	virtual ~Decorator()
	{
		if (m_com != nullptr)
		{
			delete m_com;
			m_com = nullptr;
		}
	}
private:
	Component* m_com;
};