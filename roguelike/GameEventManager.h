#ifndef _game_event_manager
#define _game_event_manager

#include "stdafx.h"
#include <memory>
#include <vector>
#include "GameObject.h"
#include "GameState.h"

using namespace std;

class GameEventManager{ 
	//Object which inherit from GameObject are automatically registered with GameEventManager when they are constructed.
	// GameEventManager creates the level object to represent the game, and then runs Start() on all registered GameObjects
	// and then continually runs Update() on all registered game objects until the GameState is set to EndGame.
public:
	virtual ~GameEventManager(){} // This gets called at the end of the program (I guess whne static variables are destroyed), and crashes during vector<shared pointer <GameObject>> destruction, probably because
							      // Player already destroyed it. So... not sure what to do. If I make it non-static  

	void StartGameEvents(); 
	const static shared_ptr<GameEventManager>& GetGameEventManager();
	const shared_ptr<GameState>& GetLevel();
	void RegisterGameObject(shared_ptr<GameObject> sptrGameObject);

	const shared_ptr<vector<shared_ptr<GameObject>>>& GetRegisteredGameVector() const { return mvecRegisteredGameVector; }

private:
	GameEventManager(); //singleton
	void AddGameObject(shared_ptr<GameObject>);
	shared_ptr<GameState> mLevel;
	shared_ptr<vector<shared_ptr<GameObject>>> mvecRegisteredGameVector; //Reference because shared pointer will double delete otherwise. ~Level() still deletes it but this way I guess it doesn't try to delete again? but...
																		//Now I'm trying it as a shared_ptr, but it's not working. ~Level() still deletes it even though there is a shared pointer to a vector pointing to the Player. Why is ~Level() doing this?

	static shared_ptr<GameEventManager> msptrGameEventManager;
};
#endif