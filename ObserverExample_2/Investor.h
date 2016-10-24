#pragma once

#include <memory>
#include <list>
using namespace std;

class Stock;
class Investor
{
public:
	void AddStock(const shared_ptr<Stock>& stock);
	void RemoveStock(const shared_ptr<Stock>& stock);
	void Update(Stock* stock);
private:
	list<shared_ptr<Stock>> m_stockList;
};