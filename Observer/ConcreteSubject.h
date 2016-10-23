#pragma once
#include "Subject.h"

class ConcreSubject : public Subject
{
public:
	virtual void Notify()
	{
		for (auto& o : m_obList)
		{
			if (o->GetKey() % 2 == 0)
			{
				o->Update(this);
			}
		}
	}
};
