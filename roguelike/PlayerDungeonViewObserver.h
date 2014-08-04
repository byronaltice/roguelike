#ifndef PLAYER_DUNGEON_VIEW_OBSERVER_
#define PLAYER_DUNGEON_VIEW_OBSERVER_
#include "Dungeon.h"
#include "DungeonObserver.h"

class PlayerDungeonViewObserver : public DungeonObserver
{
	virtual void Update(const Dungeon & radtDungeon);

	Dungeon madtDungeon;
};
#endif