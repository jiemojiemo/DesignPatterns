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
		cout << "������ " << this->GetText() << "���м���:";
		cout << "��λ���� ";
	}
};
