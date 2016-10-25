#pragma once
#include <memory>
using namespace std;


class Player;
class PlayerState
{
public:
	PlayerState(Player* player) :m_player(player) {}

	virtual void Play() = 0;
	virtual void DoubleScore() = 0;
	virtual void ChangeCards() = 0;
	virtual void PeekCards() = 0;
private:
	Player* m_player;
};

class PrimaryState : public PlayerState
{
public:
	PrimaryState(Player* player) :PlayerState(player) {}

	virtual void Play();
	virtual void DoubleScore();
	virtual void ChangeCards();
	virtual void PeekCards();
};

class SecondaryState : public PlayerState
{
public:
	SecondaryState(Player* player) :PlayerState(player) {}

	virtual void Play();
	virtual void DoubleScore();
	virtual void ChangeCards();
	virtual void PeekCards();
};

class ProfessionalState : public PlayerState
{
public:
	ProfessionalState(Player* player) :PlayerState(player) {}

	virtual void Play();
	virtual void DoubleScore();
	virtual void ChangeCards();
	virtual void PeekCards();
};

