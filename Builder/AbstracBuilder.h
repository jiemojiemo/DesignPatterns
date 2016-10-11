#pragma once
#include "Product.h"
class AbstracBuilder
{
	friend class Director;
public:
	virtual void BuilderPartA() = 0;
	virtual void BuilderPartB() = 0;
	virtual void BuilderPartC() = 0;
private:
	Product GetResult() { return prod; }
protected:
	Product prod;
};