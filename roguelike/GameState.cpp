#include "stdafx.h"

#include "GameState.h"

//Keep track of the game's state

//Maybe get rid of the Level class, and make this a class, and move the Level functionality here?

void
EndGame(bool b)
{
	bEndGame = b;
}

bool
EndGame()
{
	return bEndGame;
}