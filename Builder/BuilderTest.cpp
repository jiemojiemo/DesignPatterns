#include "Director.h"
#include "ConcreteBuilder.h"
#include <iostream>
using namespace std;
void ShowResult(const Product& product)
{
	cout << product.GetPartA() << endl;
	cout << product.GetPartB() << endl;
	cout << product.GetPartC() << endl;
}

int main()
{
	AbstracBuilder* builder1 = new ConcreteBuilder_1();
	AbstracBuilder* builder2 = new ConcreteBuilder_2();

	Director dir1(builder1);
	
	auto product1 = dir1.Construct();
	ShowResult(product1);

	Director dir2(builder2);
	
	auto product2 = dir2.Construct();
	ShowResult(product2);


	delete builder1;
	delete builder2;

	return 0;
}