#include "Department.h"
#include "Observer.h"

#include <memory>
using namespace std;

int main()
{
	auto chineseDep = make_unique<ChineseDep>();
	auto csDep = make_unique<CSDep>();

	auto t1 = make_shared<Teacher>("Cs", "001");
	auto t2 = make_shared<Teacher>("Chinese", "002");
	auto t3 = make_shared<Teacher>("Cs", "003");
	
	auto s1 = make_shared<Student>("Chinese", "0001");
	auto s2 = make_shared<Student>("Chinese", "0002");
	auto s3 = make_shared<Student>("Cs", "0003");

	chineseDep->Attach(t2);
	chineseDep->Attach(s1);
	chineseDep->Attach(s2);

	csDep->Attach(t1);
	csDep->Attach(t3);
	csDep->Attach(s3);

	chineseDep->ChangeDepName("Chinese Dep");
	csDep->ChangeDepName("CS Dep");



}