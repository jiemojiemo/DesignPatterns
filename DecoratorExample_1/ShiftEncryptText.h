#pragma once

#include "EncryptText.h"
#include <iostream>
using namespace std;
class ShiftEncryptText : public EncryptText
{
public:
	ShiftEncryptText(const string& str):EncryptText(str) {}

	virtual void Encrypt()
	{
		cout << "\n";
		cout << "对数据 " << this->GetText() << "进行加密:";
		cout << "移位加密 ";
	}
};
