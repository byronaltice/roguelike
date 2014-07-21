#include "stdafx.h"
#include "GameEventManager.h"
#include "Level.h"

shared_ptr<GameEventManager> GameEventManager::msptrGameEventManager(NULL);

void
GameEventManager::StartGameEvents()
{
	Level level; // Will make a player with is registered with the GameVector automatically
	//run once
	for (int i = 0; i < GetRegisteredGameVector().size(); i++)
	{
		GetRegisteredGameVector()[i]->Start(); //nothing for now

	}
	//keep running
	while (true)
	{
		for (int i = 0; i < GetRegisteredGameVector().size(); i++)
		{
			GetRegisteredGameVector()[i]->Update(); //Player's life goes from 100 to zero, see Player::Update

		}
		if (EndGame() == true)
			break;
	}
	return;
}

GameEventManager::GameEventManager() : mvecRegisteredGameVector(NULL) {}

const shared_ptr<GameEventManager> 
GameEventManager::GetGameEventManager()
{
	if (!msptrGameEventManager)
	{
		shared_ptr<GameEventManager> sptrGameEventManager(new GameEventManager);
		msptrGameEventManager = sptrGameEventManager;
	}
	return msptrGameEventManager;
}
void 
GameEventManager::RegisterGameObject(shared_ptr<GameObject> sptrGameObject)
{
	GetGameEventManager()->AddGameObject(sptrGameObject);
}
void
GameEventManager::AddGameObject(shared_ptr<GameObject> sptrGameObject)
{
	GetRegisteredGameVector().push_back(sptrGameObject);
}