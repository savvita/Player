#pragma once

class c_Player
{
private:
	int health;
	int damage;

public:
	c_Player();
	c_Player(int health, int damage);

	//sets
	void setHealth(int value);
	void setDamage(int value);

	//gets
	inline int getHealth() const
	{
		return this->health;
	}

	inline int getDamage() const
	{
		return this->damage;
	}

	//hit enemy
	void hit(c_Player* enemy) const;

	//defend from enemy
	void defend(const c_Player* enemy);


	//run away from the enemy
	void runAway();
};

