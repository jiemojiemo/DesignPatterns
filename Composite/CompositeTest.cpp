#include "Composite.h"
#include "Leaf.h"

int main()
{
	Component* com =  new Composite ("tree1");
	Component* a = new Leaf("a");
	Component* b = new Leaf("b");
	Component* c = new Leaf("c");
	com->Add(a);
	com->Add(b);
	com->Add(c);

	com->Display();
	com->Remove(a);
	com->Display();
	auto leaf = com->GetChild(0);
	leaf->Display();
	cout << "--------------" << endl;
	Component* com2 = new Composite("tree2");
	com2->Add(com);
	com2->Display();
}