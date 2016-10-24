#include "UserProxy.h"
#include "Member.h"
#include "Visitor.h"

#include <memory>
using namespace std;

int main()
{
	shared_ptr<User> v1 = make_shared<Visitor>();

	shared_ptr<User> m1 = make_shared<Member>();

	auto p1 = make_shared<UserProxy>(v1);
	p1->Post();
	p1->ModifyInfo();

	p1->SetUser(m1);
	p1->Post();
	p1->ModifyInfo();

	return 0;
}