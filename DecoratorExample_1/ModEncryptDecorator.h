#pragma once
#include "EncryptTextDecorator.h"

#include <iostream>
using namespace std;


class ModEncryptDecorator : public EncryptTextDecorator
{
private:
	void ModEncrypt()
	{
		cout << "ȡģ���� ";
	}
public:
	ModEncryptDecorator(const shared_ptr<EncryptText>& enc) :EncryptTextDecorator(enc) {}
	virtual void Encrypt()
	{
		EncryptTextDecorator::Encrypt();
		this->ModEncrypt();
	}
};
