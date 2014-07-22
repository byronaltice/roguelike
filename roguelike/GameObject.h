#ifndef _game_object
#define _game_object
#include <memory>
#include "GameState.h"

// Game Object Classes inherit this so they are registered with GameEventManager.
using namespace std;
class GameObject{
public:

	GameObject();
	virtual ~GameObject() {}
	virtual void Update() = 0;
	virtual void Start() = 0;


};
#endif