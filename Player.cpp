// there are 2 players
// should be 3 functions in this .cpp file

#include <iostream>
#include "Player.h"
#include "monster.h"

string Player::current_player(int &move_number)
{
  if (move_number % 2 == 0)
	{
		move_number += 1;
		return "Player1";
	}
	move_number += 1;
	return "Player2";
}

void Player::Player1 (Monster player1_monster_list[5])
{
  ;
}

void Player::Player2 (Monster player2_monster_list[5])
{
  ;
}

void Player::attackChoice(Monster monster)
{
	display(player1_monster_list, player2_monster_list); // display the players and current pokemon
	int choice;
	int move_choice_damage;
	Monster target_monster = Monster("X", 1, 1, 1); //create a new temporary object of monster class

  if (player_name == "Player1")
	{
		target_monster = player2_monster_list[0];
	}
  else if (player_name == "Player2")
	{
		target_monster = player1_monster_list[0];
	}

  cout << "Which attack do you want to use? (1/2)" << endl;
	cin >> choice;
	
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

void Player::display(Monster player1_monster_list[5], Monster player2_monster_list[5]) // function 3: Displays current status of both players and current pokemon
{
	cout << "Player1 \n" << player1_monster_list[0].name << " : " << player1_monster_list[0].health << endl;
  cout << endl;
  cout << "Player2 \n" << player2_monster_list[0].name << " : " << player2_monster_list[0].health << endl;
}
