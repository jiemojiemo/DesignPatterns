#pragma once
#include "User.h"

#include <iostream>
using namespace std;

class Member : public User
{
public:
	virtual void Post()
	{
		cout << "��Ա������һƪ����\n";
	}
	virtual void ModifyInfo()
	{
		cout << "��Ա�޸����Լ���ע����Ϣ\n";
	}
};
