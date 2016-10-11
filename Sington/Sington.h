#pragma once
#include <iostream>
using namespace std;
class Singleton
{
private:
	Singleton() = default;
public:
	static Singleton GetInstance()
	{
		static Singleton instance;
		return instance;
	}

	void OperatorA()
	{
		cout << __FUNCTION__ << endl;
	}
};
