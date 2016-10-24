#pragma once
#include "User.h"

#include <iostream>
using namespace std;

class Member : public User
{
public:
	virtual void Post()
	{
		cout << "会员发表了一篇帖子\n";
	}
	virtual void ModifyInfo()
	{
		cout << "会员修改了自己的注册信息\n";
	}
};
