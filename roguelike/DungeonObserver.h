#ifndef DUNGEON_OBSERVER_
#define DUNGEON_OBSERVER_
#include "stdafx.h"
#include "Dungeon.h"

class DungeonObserver { //base class for anyone who wants to be updated when anything in the dungeon changes (e.g.: The player's view, a minimap, an enemy's view...)

public:

	virtual void Update(const Dungeon & radtDungeon) = 0;
	virtual ~DungeonObserver(){}
	DungeonObserver()
	{
		iID = 0; //TODO: Get a random ID between 1 and whatever, and make sure it's unique
	}
	int & getID()
	{
		return iID;
	}
	void setID(int& iNewID)
	{
		iID = iNewID;
	}
	
private:
	int iID;
	

};

#endif