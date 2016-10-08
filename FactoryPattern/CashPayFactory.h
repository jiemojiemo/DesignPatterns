#pragma once
#include "AbstractPayMethodFactory.h"

class CashPayFactory : public AbstractPayMethodFactory
{
public:
	virtual unique_ptr<AbstractPay> GetPayMethod()
	{
		return make_unique<CashPay>();
	}
};

