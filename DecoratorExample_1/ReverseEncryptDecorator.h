#pragma once

#include "EncryptTextDecorator.h"
#include <iostream>
using namespace std;

class ReverseEncryptDecorator : public EncryptTextDecorator
{
private:
	void ReverseEncrypt()
	{
		cout << "ÄæÏòÊä³ö¼ÓÃÜ ";
	}
public:
	ReverseEncryptDecorator(const shared_ptr<EncryptText>& enc) :EncryptTextDecorator(enc) {}
	virtual void Encrypt()
	{
		EncryptTextDecorator::Encrypt();
		this->ReverseEncrypt();
	}
};
