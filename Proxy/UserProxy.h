#pragma once
#include "User.h"

#include <memory>
using namespace std;
class UserProxy : public User
{
public:
	UserProxy(const shared_ptr<User>& usr) :m_usr(usr) {}

	virtual void Post()
	{
		m_usr->Post();
	}

	virtual void ModifyInfo()
	{
		m_usr->ModifyInfo();
	}

	void SetUser(const shared_ptr<User>& usr) { m_usr = usr; }
	
private:
	shared_ptr<User> m_usr;
};
