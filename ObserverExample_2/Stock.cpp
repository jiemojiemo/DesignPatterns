#include "Stock.h"
#include "Investor.h"



void Stock::Attach(const shared_ptr<Investor>& inv)
{
	m_investorList.push_back(inv);
}

void Stock::Detach(const shared_ptr<Investor>& inv)
{
	m_investorList.remove(inv);
}

void Stock::Higher5Notify()
{

}

void Stock::Heighten(double p /*= 0.02*/)
{
	SetPrice(GetPrice()*(1+p));
}

