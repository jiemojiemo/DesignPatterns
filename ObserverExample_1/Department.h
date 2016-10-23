#pragma once

#include "Observer.h"

#include <string>
#include <memory>
#include <list>
#include <iostream>
using namespace std;

class Observer;
class Department
{
public:
	Department(const string& name) :m_depName(name) {}

	virtual void Attach(const shared_ptr<Observer>& ob);

	virtual void Detach(const shared_ptr<Observer>& ob);

	virtual void ChangeDepNameNotify();

	void ChangeDepName(const string& newName);

	string GetDepName()const { return m_depName; }
protected:
	list<shared_ptr<Observer>> m_obList;
	string m_depName;
};

class ChineseDep : public Department
{
public:
	ChineseDep(const string& name="Chinese") :Department(name) {}
};

class CSDep : public Department
{
public:
	CSDep(const string& name="CS") :Department(name) {}
};