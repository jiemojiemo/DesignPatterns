#pragma once
#include "AbstracBuilder.h"

class ConcreteBuilder_1 : public AbstracBuilder
{
public:
	virtual void BuilderPartA();
	virtual void BuilderPartB();
	virtual void BuilderPartC();
};

void ConcreteBuilder_1::BuilderPartA()
{
	this->prod.SetPartA(1);
}

void ConcreteBuilder_1::BuilderPartB()
{
	this->prod.SetPartB(1.0);
}

void ConcreteBuilder_1::BuilderPartC()
{
	this->prod.SetPartC('A');
}


class ConcreteBuilder_2 : public AbstracBuilder
{
public:
	virtual void BuilderPartA();
	virtual void BuilderPartB();
	virtual void BuilderPartC();
};

void ConcreteBuilder_2::BuilderPartA()
{
	this->prod.SetPartA(2);
}

void ConcreteBuilder_2::BuilderPartB()
{
	this->prod.SetPartB(2.0);
}

void ConcreteBuilder_2::BuilderPartC()
{
	this->prod.SetPartC('B');
}