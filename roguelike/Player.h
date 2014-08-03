#ifndef _player
#define _player

#include "GameObject.h"
//A representation of the Player. Used by Level.
class Player : public GameObject
{
public:
	virtual ~Player() {}
	static shared_ptr<Player> GetInstance() { return dynamic_pointer_cast<Player>((new Player)->shared_from_this());  }
private:
	Player();
	virtual void Update();
	virtual void Start();
	int miMaxHealth;

};
#endif