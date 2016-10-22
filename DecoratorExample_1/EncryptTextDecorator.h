#pragma once
#include "EncryptText.h"
#include <memory>
using namespace std;
class EncryptTextDecorator : public EncryptText
{
public:
	EncryptTextDecorator(const shared_ptr<EncryptText>& enc) :m_encryptText(enc) {}
	virtual void Encrypt()
	{
		m_encryptText->Encrypt();
	}
private:
	shared_ptr<EncryptText> m_encryptText;
};
