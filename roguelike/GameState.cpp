#include "stdafx.h"
#include "GameState.h"

bool GameState::mbEndGame(false);

GameState::GameState() : msptrPlayer(NULL)
{
	shared_ptr<Player> sptrPlayer(Player::GetInstance());
	SetPlayer(sptrPlayer);
}