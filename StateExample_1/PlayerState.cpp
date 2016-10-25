#include "PlayerState.h"
#include <iostream>
using namespace std;
void PrimaryState::Play()
{
	cout << "PrimaryState Play()\n";
}

void PrimaryState::DoubleScore()
{
	cout << "PrimaryState can't Double Score\n";
}

void PrimaryState::ChangeCards()
{
	cout << "PrimaryState can't ChangeCards\n";
}

void PrimaryState::PeekCards()
{
	cout << "PrimaryState can't PeekCards\n";
}

void SecondaryState::Play()
{
	cout << "SecondaryState Play()\n";
}

void SecondaryState::DoubleScore()
{
	cout << "SecondaryState DoubleScore()\n";
}

void SecondaryState::ChangeCards()
{
	cout << "SecondaryState can't ChangeCards\n";
}

void SecondaryState::PeekCards()
{
	cout << "SecondaryState can't PeekCards()\n";
}

void ProfessionalState::Play()
{
	cout << "ProfessionalState Play()\n";
}

void ProfessionalState::DoubleScore()
{
	cout << "ProfessionalState DoubleScore()\n";
}

void ProfessionalState::ChangeCards()
{
	cout << "ProfessionalState ChangeCards\n";
}

void ProfessionalState::PeekCards()
{
	cout << "ProfessionalState can't PeekCards\n";
}
