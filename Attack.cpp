// cpp file for the attack conditions

#include <iostream>
#include "Attack.h"
#include "Monster.h"
#include "Player.h"


void Player::attackChoice(Monster monster)
{
	display(player1_monster_list, player2_monster_list); // display the players and current pokemon
	int choice;
	int move_choice_damage;
	Monster target_monster = Monster("X", 1, 1, 1); //create a new temporary object of monster class
	cout << "Which attack do you want to use? (1/2)" << endl;
	cin >> choice;

    if (player_name == "Player1")
	{
		target_monster = player2_monster_list[0];
	}
    else if (player_name == "Player2")
	{
		target_monster = player1_monster_list[0];
	}
	
	

	switch (choice)
	{
	case 1:
		move_choice_damage = monster.move1_damage;
		monster.attack(monster, target_monster, move_choice_damage);
		break;

    case 2:
		move_choice_damage = monster.move2_damage;
		monster.attack(monster, target_monster, move_choice_damage);
		break;
	
	default:
	    cout << "Please enter valid input" << endl;
		Player::attackChoice(monster);
		break;
	}
}
/*
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
*/

