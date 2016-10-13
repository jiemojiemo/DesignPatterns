#pragma once
#include <iostream>
using namespace std;
class Target
{
public:
	virtual void FuncA()
	{
		cout << "FuncA" << endl;
	}
	virtual void FuncB()
	{
		cout << "FuncB" << endl;
	}
};