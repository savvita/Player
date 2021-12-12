#include "c_Player.h"

c_Player::c_Player()
{
	health = 0;
	damage = 0;
}

c_Player::c_Player(int health, int damage):c_Player()
{
	if (health >= 0 && health <= 100)
		this->health = health;

	if (damage >= 0 && damage <= 100)
		this->damage = damage;
}

void c_Player::setHealth(int value)
{
	if (value >= 0 && value <= 100)
		this->health = value;
}

void c_Player::setDamage(int value)
{
	if (value >= 0 && value <= 100)
		this->damage = value;
}