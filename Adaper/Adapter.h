#pragma once
#include "Target.h"
#include "Adaptee.h"
class Adapter : public Target
{
public:
	Adapter(const Adaptee& ap) :m_adaptee(ap) {}
	virtual void FuncB()
	{
		m_adaptee.FFF();
	}
private:
	Adaptee m_adaptee;
};