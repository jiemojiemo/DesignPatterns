#pragma once

#include "User.h"

#include <iostream>
using namespace std;

class Visitor : public User
{
public:
	virtual void Post()
	{
		cout << "�ο�û��Ȩ�޷���\n";
	}

	virtual void ModifyInfo()
	{
		cout << "�ο�û��Ȩ���޸�ע����Ϣ\n";
	}
};