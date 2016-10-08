#pragma once
#include "AbstractPayMethodFactory.h"

class CreditCardPayFactory : public AbstractPayMethodFactory
{
public:
	virtual unique_ptr<AbstractPay> GetPayMethod()
	{
		return make_unique<CreditCardPay>();
	}
};
