#ifndef _level
#define _level
#include <vector>
#include "Player.h"

class Level // A representation of the Level/Game/Scene
{
public:
	Level();
	virtual ~Level() {}
private:
	void SetPlayer(shared_ptr<Player> sptrPlayer) { msptrPlayer = sptrPlayer; }
	shared_ptr<Player> msptrPlayer;
	vector<shared_ptr<Player>> msptrMob; // Representation of all the NPCs in the game. Eventually make a Mob class but for now just use Player
	// shared_ptr<LevelMap> mMap // Representation of what the game looks like visually
	// Renderer // Should the level have the renderer to create the graphics? Or should this be handled by another "GUI Layer" and interact with this layer as little as possible ?
};

#endif