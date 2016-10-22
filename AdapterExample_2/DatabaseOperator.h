#pragma once
#include "Encrypt.h"

#include <iostream>
using namespace std;
class DatabaseOperator
{
public:
	virtual void Save(const Info& info)
	{
		cout << "Save: " << info << endl;
	}
};
