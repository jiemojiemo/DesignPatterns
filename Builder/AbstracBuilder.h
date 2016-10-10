#pragma once
#include "Product.h"
class AbstracBuilder
{
public:
	virtual void BuilderPartA() = 0;
	virtual void BuilderPartB() = 0;
	virtual void BuilderPartC() = 0;
	Product GetResult() { return prod; }
protected:
	Product prod;
};