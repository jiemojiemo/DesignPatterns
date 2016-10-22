#include "DatabaseAdapter.h"
#include "Encrypt.h"

int main()
{
	Encryptor* enc = new MD5;
	DatabaseAdapter da(enc);

	da.Save("Is a message");

	delete enc;
}