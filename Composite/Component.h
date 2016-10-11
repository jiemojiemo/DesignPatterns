#pragma once
#include <string>
using std::string;
class Component
{
public:
	Component(string name) :m_name(name) {}

	virtual void Add(Component* com) = 0;
	virtual void Remove(Component* com) = 0;
	virtual Component* GetChild(int index) = 0;
	virtual void Display() = 0;

	virtual ~Component() = default;

protected:
	string m_name;
};
