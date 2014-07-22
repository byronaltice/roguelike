#ifndef _level
#define _level
#include <vector>
#include "Player.h"
#include <memory>

using namespace std;

class GameState // A representation of the Level/Game/Scene
{
public:
	GameState();
	virtual ~GameState() {}
	//Keep track of the game's state

	//Maybe get rid of the Level class, and make this a class, and move the Level functionality here?

	static void EndGame(const bool & b) { mbEndGame = b; }

	static const bool & EndGame() { return mbEndGame; }
private:
	void SetPlayer(shared_ptr<Player> sptrPlayer) { msptrPlayer = sptrPlayer; }
	static bool mbEndGame;
	shared_ptr<Player> msptrPlayer;
	vector<shared_ptr<Player>> msptrMob; // Representation of all the NPCs in the game. Eventually make a Mob class but for now just use Player
	// shared_ptr<LevelMap> mMap // Representation of what the game looks like visually
	// Renderer // Should the level have the renderer to create the graphics? Or should this be handled by another "GUI Layer" and interact with this layer as little as possible ?
};

#endif