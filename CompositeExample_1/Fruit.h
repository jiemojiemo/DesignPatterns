#pragma once
#include "MyElement.h"


class Apple : public MyElement
{
public:
	virtual void Eat()
	{
		cout << "Eat Apple" << endl;
	}
};

class Banana : public MyElement
{
public:
	virtual void Eat()
	{
		cout << "Eat Banana" << endl;
	}
};

class Pear : public MyElement
{
public:
	virtual void Eat()
	{
		cout << "Eat Pear" << endl;
	}
};
