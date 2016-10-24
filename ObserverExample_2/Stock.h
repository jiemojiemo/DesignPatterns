#pragma once

#include <string>
#include <memory>
#include <list>
using namespace std;

class Investor;
class Stock
{
public:
	void Attach(const shared_ptr<Investor>& inv);
	void Detach(const shared_ptr<Investor>& inv);
	void Higher5Notify();
	void Heighten(double p = 0.02);


	string GetID() const { return m_ID; }
	void SetID(string val) { m_ID = val; }

	double GetPrice() const { return m_price; }
	void SetPrice(double val) { m_price = val; }
private:
	string m_ID;
	double m_price;
	list<shared_ptr<Investor>> m_investorList;
};