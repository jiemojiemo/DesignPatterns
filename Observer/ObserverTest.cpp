#include "ConcreteSubject.h"
#include "ConcreteObserver.h"

#include <memory>
using namespace std;

int main()
{
	Subject* sub = new ConcreSubject();
	Observer* o1 = new ConcreteObserver(1);
	Observer* o2 = new ConcreteObserver(2);
	Observer* o3 = new ConcreteObserver(3);
	Observer* o4 = new ConcreteObserver(4);


	sub->Attach(o1);
	sub->Attach(o2);
	sub->Attach(o3);
	sub->Attach(o4);

	sub->Notify();

	//delete
	return 0;
}