#pragma once
#include "AbstracBuilder.h"
class Director
{
public:
	Director(AbstracBuilder* builder) :m_builder(builder) {}
	Product Construct()
	{
		m_builder->BuilderPartA();
		m_builder->BuilderPartB();
		m_builder->BuilderPartC();

		return m_builder->GetResult();
	}

private:
	AbstracBuilder* m_builder;
};
