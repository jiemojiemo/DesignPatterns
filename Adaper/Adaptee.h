#pragma once
#include <iostream>
#include <functional>
using namespace std;
class Adaptee
{
public:
	Adaptee(function<void(void)> func) :m_func(func) {}
	void FFF()
	{
		m_func();
	}
private:
	function<void(void)> m_func;
};
