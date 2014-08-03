
#include "stdafx.h"
#include "GameObject.h"
#include "GameEventManager.h"

GameObject::GameObject()
{
	shared_ptr<GameObject> ptr(this);
	GameEventManager::GetGameEventManager()->RegisterGameObject(ptr);
}