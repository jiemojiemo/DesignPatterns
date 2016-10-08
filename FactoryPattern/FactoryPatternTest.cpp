#include "CashPayFactory.h"
#include "CreditCardPayFactory.h"
#include "AbstractPayMethodFactory.h"

unique_ptr<AbstractPayMethodFactory> GetCashPayFactory()
{
	return make_unique<CashPayFactory>();
}

unique_ptr<AbstractPayMethodFactory> GetCreditCardPayFactory()
{
	return make_unique<CreditCardPayFactory>();
}

int main()
{
	auto factory1 = GetCashPayFactory();
	auto factory2 = GetCreditCardPayFactory();
	auto pay1 = factory1->GetPayMethod();
	auto pay2 = factory2->GetPayMethod();
	pay1->Pay();
	pay2->Pay();
	return 0;
}