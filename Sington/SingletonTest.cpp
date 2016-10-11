#include "Sington.h"

int main()
{
	auto instance = Singleton::GetInstance();
	instance.OperatorA();
	return 0;
}