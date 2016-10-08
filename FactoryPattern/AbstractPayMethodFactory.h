#pragma once
#include "../SimpleFactoryPattern/CashPay.h"
#include "../SimpleFactoryPattern/CreditCarPay.h"
#include <memory>
using namespace std;
class AbstractPayMethodFactory
{
public:
	virtual unique_ptr<AbstractPay> GetPayMethod() = 0;
};
