#pragma once
#include <iostream>
using namespace std;
class Connection
{
public:
	virtual void DoConnection() = 0;
};

class MySQLConnection : public Connection
{
public:
	virtual void DoConnection()
	{
		cout << "MySQL Connection" << endl;
	}
};

class OracleConnection : public Connection
{
public:
	virtual void DoConnection()
	{
		cout << "Oracle Connection" << endl;
	}
};