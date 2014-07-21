#ifndef _game_event_manager
#define _game_event_manager

#include "stdafx.h"
#include <memory>
#include <vector>
#include "GameObject.h"

using namespace std;

class GameEventManager{ 
	//Object which inherit from GameObject are automatically registered with GameEventManager when they are constructed.
	// GameEventManager creates the level object to represent the game, and then runs Start() on all registered GameObjects
	// and then continually runs Update() on all registered game objects until the GameState is set to EndGame.
public:
	GameEventManager();
	virtual ~GameEventManager(){}

	void StartGameEvents(); 
	const static shared_ptr<GameEventManager> GetGameEventManager();
	void RegisterGameObject(shared_ptr<GameObject> sptrGameObject);

	vector<shared_ptr<GameObject>> GetRegisteredGameVector(){ return mvecRegisteredGameVector; }

private:
	void AddGameObject(shared_ptr<GameObject>);
	vector<shared_ptr<GameObject>> mvecRegisteredGameVector;

	static shared_ptr<GameEventManager> msptrGameEventManager;
};
#endif