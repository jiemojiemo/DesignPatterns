#pragma once
#include "AbstactPay.h"
class CashPay : public AbstractPay
{
public:
	virtual void Pay() { cout << "Cash Pay" << endl; }
};
