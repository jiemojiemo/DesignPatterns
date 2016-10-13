#include "Adapter.h"

void SpecialRequest()
{
	cout << "FFFFFFFFFFF" << endl;
}

int main()
{
	Adaptee ap(SpecialRequest);
	Adapter adapter(ap);
	adapter.FuncA();
	adapter.FuncB();
}