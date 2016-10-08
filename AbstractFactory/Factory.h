#pragma once

#include "Connection.h"
#include "Statement.h"
#include <memory>
using namespace std;
class AbstractDatabaseFactory
{
public:
	virtual unique_ptr<Connection> CreateConnection() = 0;
	virtual unique_ptr<Statement> CreateStatement() = 0;
};

class MySQLFactory : public AbstractDatabaseFactory
{
public:
	virtual unique_ptr<Connection> CreateConnection()
	{
		return make_unique<MySQLConnection>();
	}
	virtual unique_ptr<Statement> CreateStatement()
	{
		return make_unique<MySQLStatement>();
	}
};

class OracleFactory : public AbstractDatabaseFactory
{
public:
	virtual unique_ptr<Connection> CreateConnection()
	{
		return make_unique<OracleConnection>();
	}
	virtual unique_ptr<Statement> CreateStatement()
	{
		return make_unique<OracleStatement>();
	}
};