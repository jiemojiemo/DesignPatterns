#include "Observer.h"

void Teacher::UpdateDepName(Department* dep)
{
	cout << "Teacher ";
	cout << "ID:" << m_ID;

	m_depName = dep->GetDepName();

	cout << " Change to new department name:" << m_depName << endl;
}

void Student::UpdateDepName(Department* dep)
{
	cout << "Student ";
	cout << "ID:" << m_ID;

	m_depName = dep->GetDepName();

	cout << " Change to new department name:" << m_depName << endl;
}