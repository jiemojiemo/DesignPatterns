#include "EncryptModule.h"

int main()
{
	EncrytModule enc;

	auto text = enc.Readfile("abc");
	enc.Encrypt(text);
	enc.WriteFile("bcd");

	return 0;
}