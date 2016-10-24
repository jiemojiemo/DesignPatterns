#pragma once

#include <string>
#include <iostream>
using namespace std;

class Encryptor
{
public:
	void Encrypt(const string& text)
	{
		cout << "Encrypt string:" << text << endl;
		cout << "Complete encrypt\n";
	}
};
