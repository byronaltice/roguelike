#ifndef _player
#define _player

#include "GameObject.h"
//A representation of the Player. Used by Level.
class Player : public GameObject
{
public:
	Player();
	virtual ~Player() {}
private:
	virtual void Update();
	virtual void Start();
	int miMaxHealth;

};
#endif