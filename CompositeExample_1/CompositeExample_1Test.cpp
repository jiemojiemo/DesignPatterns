#include "MyElement.h"
#include "Plate.h"
#include "Fruit.h"
int main()
{
	Plate* plate = new Plate();
	MyElement* apple = new Apple();
	MyElement* banana = new Banana();
	MyElement* pear = new Pear();

	plate->Add(apple);
	plate->Add(banana);
	plate->Add(pear);
	plate->Eat();
	plate->remove(apple);

	plate->Eat();


	return 0;
}