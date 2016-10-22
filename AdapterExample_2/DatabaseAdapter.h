#pragma once
#include "DatabaseOperator.h"
class DatabaseAdapter : public DatabaseOperator
{
public:
	DatabaseAdapter(Encryptor* enc) :m_encryptor(enc) {}

	virtual void Save(const Info& info)
	{
		auto encryptedInfo = m_encryptor->Encrypt(info);
		DatabaseOperator::Save(encryptedInfo);
	}
private:
	Encryptor* m_encryptor;
};
