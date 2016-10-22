#pragma once
#include "RobotTarget.h"
#include "Dog.h"
#include "Bird.h"

class RobotA : public RobotTarget
{
public:
	RobotA(Dog* dog, Bird* bird) :m_dog(dog), m_bird(bird) {}
	virtual void Run()
	{
		m_dog->Run();
	}
	virtual void Echo()
	{
		m_bird->Echo();
	}
private:
	Dog* m_dog;
	Bird* m_bird;
};