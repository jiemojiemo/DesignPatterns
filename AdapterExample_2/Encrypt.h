#pragma once
#include <string>
using std::string;
typedef string Info;
class Encryptor
{
public:
	virtual Info Encrypt(const Info& info) = 0;
};

class MD5 : public Encryptor
{
public:
	virtual Info Encrypt(const Info& info)
	{
		auto encrypedInfo = "MD5" + info;
		return encrypedInfo;
	}
};

class SRA : public Encryptor
{
public:
	virtual Info Encrypt(const Info& info)
	{
		auto encrypedInfo = "SRA" + info;
		return encrypedInfo;
	}
};

class SSH : public Encryptor
{
public:
	virtual Info Encrypt(const Info& info)
	{
		auto encrypedInfo = "SSH" + info;
		return encrypedInfo;
	}
};