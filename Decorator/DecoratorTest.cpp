#include "ConcreteComponent.h"
#include "ConcreteDecorator.h"
int main()
{
	Component* conCom = new ConcreteComponent();
	Decorator* dec = new ConcreteDecorator(conCom);

	dec->Operation();
	
	return 0;
}