#pragma once
#include "AbstracBuilder.h"
class Director
{
public:
	Director(AbstracBuilder* builder) :m_builder(builder) {}
	void Construct()
	{
		m_builder->BuilderPartA();
		m_builder->BuilderPartB();
		m_builder->BuilderPartC();
	}

private:
	AbstracBuilder* m_builder;
};
