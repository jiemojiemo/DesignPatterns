#pragma once
#include "CashPay.h"
#include "CreditCarPay.h"
#include <memory>
using namespace std;
class PayMethodFactory
{
public:
	unique_ptr<AbstractPay> GetPayMethod(int tag)
	{
		if (tag == 0)
		{
			return make_unique<CashPay>();
		}
		else if(tag == 1)
		{
			return make_unique<CreditCardPay>();
		}
	}
};
