#include "Factory.h"

unique_ptr<AbstractDatabaseFactory> GetMySQLFactory()
{
	return make_unique<MySQLFactory>();
}

unique_ptr<AbstractDatabaseFactory> GetOracleFactory()
{
	return make_unique<OracleFactory>();
}

int main()
{
	auto fac1 = GetMySQLFactory();
	auto fac2 = GetOracleFactory();
	//unique_ptr<Connection> con(fac1->CreateConnection());
	//unique_ptr<Statement> sta(fac1->CreateStatement());

	unique_ptr<Connection> con(fac2->CreateConnection());
	unique_ptr<Statement> sta(fac2->CreateStatement());

	con->DoConnection();
	sta->DoStatement();


}