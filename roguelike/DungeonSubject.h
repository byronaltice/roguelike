#ifndef DUNGEON_SUBJECT_
#define DUNGEON_SUBJECT_
#include "stdafx.h"
#include "DungeonObserver.h"
#include <map>

class DungeonSubject { // keeps track of the layout of the Dungeon

public:
	void AddDungeonObserver(DungeonObserver* radtDungeonObserver)
	{
		//if (!radtDungeonObserver.getID())
		{
		//	currentID++;
		//	radtDungeonObserver.setID(currentID);
		}
		stlDungeonObserverMap[radtDungeonObserver->getID()] = *radtDungeonObserver;
	}
	void RemoveDungeonObserver(DungeonObserver& radtDungeonObserver)
	{
		//stlDungeonObserverMap.erase(radtDungeonObserver.getID());
	}
	void Notify()
	{
		//for (std::map<int, DungeonObserver&>::iterator it = stlDungeonObserverMap.begin(); it != stlDungeonObserverMap.end(); it++)
		{
			//DungeonObserver& radtDungeonObserver = it->second;
			//radtDungeonObserver.Update(madtDungeon);
		}
	}
	void UpdateDungeon(Dungeon & radtNewDungeonLayout)
	{
		Notify();
	}
private:

	int currentID = 0;
	std::map<int, DungeonObserver&> stlDungeonObserverMap;
	Dungeon madtDungeon;

};

#endif