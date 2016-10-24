#pragma once

#include "User.h"

#include <iostream>
using namespace std;

class Visitor : public User
{
public:
	virtual void Post()
	{
		cout << "游客没有权限发帖\n";
	}

	virtual void ModifyInfo()
	{
		cout << "游客没有权限修改注册信息\n";
	}
};