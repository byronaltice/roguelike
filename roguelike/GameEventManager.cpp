#include "stdafx.h"
#include "GameEventManager.h"
#include "GameState.h"

shared_ptr<GameEventManager> GameEventManager::msptrGameEventManager(new GameEventManager);

void
GameEventManager::StartGameEvents()
{
	//run once
	int size = GetRegisteredGameVector()->size();
	vector<shared_ptr<GameObject>> & vecsptrRegisteredGameVector = (*GetRegisteredGameVector());
	for (int i = 0; i < GetRegisteredGameVector()->size(); ++i)
	{
		vecsptrRegisteredGameVector[i]->Start(); //nothing for now 
	}
	//keep running
	while (GetLevel()->EndGame() != true)
	{
		for (int i = 0; i < GetRegisteredGameVector()->size(); i++)
		{
			(*GetRegisteredGameVector())[i]->Update(); //Player's life goes from 100 to zero, see Player::Update

		}
	}
	return; 
	// GameState destructor is called and destroys player for some reason, even though it's still being referenced by the GameEventManager's vector.
}

GameEventManager::GameEventManager() : mvecRegisteredGameVector(new vector<shared_ptr<GameObject>>) , mLevel(NULL) //Instantiating the level before the GameEventManager is fully instantiated causes an infinite recursion.
{
	return;
}

const shared_ptr<GameEventManager>& 
GameEventManager::GetGameEventManager()
{
	if (!msptrGameEventManager)
	{
		msptrGameEventManager.reset(new GameEventManager);
	}
	return msptrGameEventManager;
}

const shared_ptr<GameState>&
GameEventManager::GetLevel()
{
	if (!mLevel)
	{
		mLevel.reset(new GameState);
	}
	return mLevel;
}
void 
GameEventManager::RegisterGameObject(shared_ptr<GameObject> sptrGameObject)
{
	GetGameEventManager()->AddGameObject(sptrGameObject);
}
void
GameEventManager::AddGameObject(shared_ptr<GameObject> sptrGameObject)
{
	GetRegisteredGameVector()->push_back(sptrGameObject);
}