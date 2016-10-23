#pragma once
#include "Department.h"

#include <string>
#include <iostream>
using namespace std;

class Department;
class Observer
{
public:
	Observer(const string& depname, const string& id) :m_depName(depname), m_ID(id) {}

	virtual void UpdateDepName(Department* dep) = 0;
protected:
	string m_depName;
	string m_ID;
};


class Teacher : public Observer
{
public:
	Teacher(const string& depname, const string& id) :Observer(depname, id) {}

	virtual void UpdateDepName(Department* dep);

};

class Student : public Observer
{
public:
	Student(const string& depname, const string& id) :Observer(depname, id) {}

	virtual void UpdateDepName(Department* dep);

};