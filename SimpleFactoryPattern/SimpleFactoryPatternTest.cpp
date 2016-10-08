#include "PayMethodFactory.h"

int main()
{
	PayMethodFactory factory;
	auto payMethod = factory.GetPayMethod(0);
	auto payMethod2 = factory.GetPayMethod(1);

	payMethod->Pay();
	payMethod2->Pay();
	return 0;
}