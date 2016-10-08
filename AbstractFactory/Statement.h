#pragma once
#include <iostream>
using namespace std;

class Statement
{
public:
	virtual void DoStatement() = 0;
};

class MySQLStatement : public Statement
{
public:
	virtual void DoStatement()
	{
		cout << "MySQL Statement" << endl;
	}
};

class OracleStatement : public Statement
{
public:
	virtual void DoStatement()
	{
		cout << "Oracle Statement" << endl;
	}
};
