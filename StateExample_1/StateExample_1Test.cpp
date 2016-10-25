#include "Player.h"
#include "PlayerState.h"

int main()
{
	Player player;
	player.Play();
	player.DoubleScore();
	player.ChangeCards();
	player.PeekCards();
	player.Win();
	player.Play();
	player.DoubleScore();
	player.ChangeCards();
	player.PeekCards();
	player.Win();
	player.Play();
	player.DoubleScore();
	player.ChangeCards();
	player.PeekCards();
}