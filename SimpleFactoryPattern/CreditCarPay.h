#pragma once
#include "AbstactPay.h"

class CreditCardPay : public AbstractPay
{
public:
	virtual void Pay() { cout << "Credit Card Pay" << endl; }
};
