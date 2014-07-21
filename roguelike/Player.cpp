#include "stdafx.h"
#include "Player.h"

Player::Player() : miMaxHealth(100) {};
void
Player::Start()
{

}

void
Player::Update() // reimplement GameObject::Update(), which is called by the GameEventManager
{
	miMaxHealth--;
	if (miMaxHealth <= 0)
	{
		EndGame(true);
	}
}
