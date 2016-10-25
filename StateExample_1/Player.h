#pragma once

class PlayerState;
class Player
{
public:
	Player();


	void Play();
	void DoubleScore();
	void ChangeCards();
	void PeekCards();

	void Win();
	void Lost();
private:
	void LevelUp();

private:
	int m_score;
	int m_velocity;
	PlayerState* m_state;
};
