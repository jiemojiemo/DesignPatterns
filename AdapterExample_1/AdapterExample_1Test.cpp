#include "RobotA.h"
#include "Dog.h"
#include "Bird.h"

int main()
{
	auto dog = new Dog();
	auto bird = new Bird();

	RobotA robotA(dog, bird);
	robotA.Echo();
	robotA.Run();


	delete dog;
	delete bird;
}