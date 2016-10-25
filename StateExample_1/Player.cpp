#include "Player.h"
#include "PlayerState.h"
Player::Player() :m_score(0), m_velocity(100),
	m_state(new PrimaryState(this))
{}

void Player::Play()
{
	m_state->Play();
}

void Player::DoubleScore()
{
	m_state->DoubleScore();
}

void Player::ChangeCards()
{
	m_state->ChangeCards();
}

void Player::PeekCards()
{
	m_state->PeekCards();
}

void Player::Win()
{
	m_score += m_velocity;
	LevelUp();
}

void Player::Lost()
{
	if (m_score > m_velocity)
		m_score -= m_velocity;
	else
		m_score = 0;

	LevelUp();
}

void Player::LevelUp()
{
	delete m_state;
	if (m_score >= 200)
		m_state = new ProfessionalState(this);
	else if (m_score >= 100)
		m_state = new SecondaryState(this);
	else
		m_state = new PrimaryState(this);
}

