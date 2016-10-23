#include "Department.h"

void Department::Attach(const shared_ptr<Observer>& ob)
{
	m_obList.push_back(ob);
}

void Department::Detach(const shared_ptr<Observer>& ob)
{
	m_obList.remove(ob);
}

void Department::ChangeDepNameNotify()
{
	for (auto& o : m_obList)
	{
		o->UpdateDepName(this);
	}
}

void Department::ChangeDepName(const string& newName)
{
	cout << "old name:" << m_depName << endl;
	m_depName = newName;
	cout << "new name:" << m_depName << endl;

	ChangeDepNameNotify();
}