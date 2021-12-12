#include <iostream>
#include"c_Player.h"

using std::cout;

int main()
{
	srand(time(0));
	c_Player** players = new c_Player * [2];
	players[0] = new c_Player(100, 15);
	players[1] = new c_Player();

	players[1]->setHealth(50 + rand() % 51);
	players[1]->setDamage(1 + rand() % 15);

	int round = 1;

	while (players[0]->getHealth() > 0 && players[1]->getHealth() > 0)
	{
		cout << "Round " << round++ << " =======================\n";
		for (int i = 0; i < 2; i++)
		{
			cout << "Player " << i + 1 << ":\n";
			cout << "\tHealth: " << players[i]->getHealth() << "\n";
			cout << "\tDamage: " << players[i]->getDamage() << "\n";
		}

		cout << "===============================\n";

		players[0]->hit(players[1]);
		cout << "Player 1 hits Player 2\n";

		if (players[1]->getHealth() > 0)
		{
			players[1]->hit(players[0]);
			cout << "Player 2 hits Player 1\n";
		}
		else
		{
			cout << "Player 2 is dead\n";
			break;
		}

		if (players[0]->getHealth() == 0)
		{
			cout << "Player 1 is dead\n";
			break;
		}

		if (rand() % 10 == 0)
		{
			players[0]->runAway();
			cout << "Player 1 run away\n";
			break;
		}

		if (rand() % 10 == 0)
		{
			players[1]->runAway();
			cout << "Player 2 run away\n";
			break;
		}
		cout << "===============================\n";
	}
	
}