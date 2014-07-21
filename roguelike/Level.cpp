#include "stdafx.h"
#include "Level.h"

Level::Level() : msptrPlayer(NULL)
{
	shared_ptr<Player> sptrPlayer(new Player);
	SetPlayer(sptrPlayer);
}