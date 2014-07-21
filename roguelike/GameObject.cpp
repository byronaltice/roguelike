
#include "stdafx.h"
#include "GameObject.h"
#include "GameEventManager.h"

GameObject::GameObject()
{
	GameEventManager::GetGameEventManager()->RegisterGameObject(shared_from_this());
}