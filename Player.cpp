// there are 2 players
// should be 3 functions in this .cpp file

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
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
//function that identifies which player has the turn
// to move depending on move number

void Player::attackChoice(Monster monster, bool game_over, vector<Monster> &player1_monster_list, vector<Monster> &player2_monster_list, string current_player)
{
	display(player1_monster_list, player2_monster_list); 
	// display the players and current pokemon
	
	int choice;
	int move_choice_damage;
	Monster target_monster = Monster("X", 1, 1, 1); 
	//create a new temporary object of monster class

  if (current_player == "Player1")
	{
		target_monster = player2_monster_list.back();
	}
  else if (current_player == "Player2")
	{
		target_monster = player1_monster_list.back();
	}

  cout << "Which attack do you want to use " << current_player << " ? (1/2)" << endl; //asks user for the move to be used
	cin >> choice;
	system ("clear");
	
	switch (choice)
	{
	case 1:
		move_choice_damage = monster.move1_damage;
		monster.attack(monster, target_monster, move_choice_damage, game_over, player1_monster_list, player2_monster_list, current_player);
		break;

    case 2:
		move_choice_damage = monster.move2_damage;
		monster.attack(monster, target_monster, move_choice_damage, game_over, player1_monster_list, player2_monster_list, current_player);
		break;
	
	default:
	  cout << "Please enter valid input" << endl;
	  Player::attackChoice(monster, game_over, player1_monster_list, player2_monster_list, current_player);
	  break;
	}
	// assigns move based on players choice
	// asks for input again in case invalid choice entered
	
}

void Player::display(vector<Monster> player1_monster_list, vector<Monster> player2_monster_list) //Displays current status of both players and current pokemon
{
  cout << "Player1 (number of pokemon left: " << player1_monster_list.size() << ") \n" << player1_monster_list.back().name << " : " << player1_monster_list.back().health << endl;
  cout << endl;
  cout << "Player2 (number of pokemon left: " << player2_monster_list.size() << ") \n" << player2_monster_list.back().name << " : " << player2_monster_list.back().health << endl;
}
