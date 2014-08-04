#include "stdafx.h"
#include "PlayerDungeonViewObserver.h"
#include <iostream>
using namespace std;

void PlayerDungeonViewObserver::Update(const Dungeon & radtDungeon)
{
	madtDungeon = radtDungeon;
	//madtDungeon.DisplayToScreen();
	cout << "PlayerDungeonViewObserver::Update(const Dungeon&)" << endl;
}