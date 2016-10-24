#include "Investor.h"
#include "Stock.h"
#include <iostream>
using namespace std;
void Investor::AddStock(const shared_ptr<Stock>& stock)
{
	m_stockList.push_back(stock);
}

void Investor::RemoveStock(const shared_ptr<Stock>& stock)
{
	m_stockList.remove(stock);
}

void Investor::Update(Stock* stock)
{
	
}

