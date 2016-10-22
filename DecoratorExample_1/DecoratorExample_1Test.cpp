#include "ShiftEncryptText.h"
#include "ModEncryptDecorator.h"
#include "ReverseEncryptDecorator.h"

#include <memory>
using namespace std;

int main()
{
	shared_ptr<EncryptText> shift = make_shared<ShiftEncryptText>("123");
	shift->Encrypt();

	shared_ptr<EncryptTextDecorator> rev = make_shared<ReverseEncryptDecorator>(shift);
	rev->Encrypt();
	shared_ptr<EncryptTextDecorator> mod = make_shared<ModEncryptDecorator>(rev);
	mod->Encrypt();

	shared_ptr<EncryptTextDecorator> mod2 = make_shared<ModEncryptDecorator>(mod);
	mod2->Encrypt();


	return 0;
}