// cpp file for the attack conditions

#include "Attack.h"
#include "Monster.h"
#include "Player.h"

void Player::attackChoice(Player &C)
{
	
	C.display();
    int choice;
	cout << "Which type of attack? (1/2)" << endl;
	cin >> choice;
	switch (choice)
	{
		case 1:
			// condition
			break;
			
		case 2:
			// condition
			break;
	}
}

