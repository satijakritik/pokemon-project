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
/*
void Player::Player1 (vector<Monster> &player1_monster_list)
{
  const int num_of_pokemon = 3;
  int random_number;
  srand(time(NULL));
  for (int i = 0; i < num_of_pokemon; i++)
  {
	  random_number = rand() % 10;
	  player1_monster_list.push_back(complete_monster_list[random_number]);
  }
}

void Player::Player2 (vector<Monster> &player2_monster_list)
{
  const int num_of_pokemon = 3;
  int random_number;
  srand(time(NULL));
  for (int i = 0; i < num_of_pokemon; i++)
  {
	  random_number = rand() % 10;
	  player2_monster_list.push_back(complete_monster_list[random_number]);
  }
}
*/

void Player::attackChoice(Monster monster, bool game_over, vector<Monster> &player1_monster_list, vector<Monster> &player2_monster_list, string current_player)
{
	display(player1_monster_list, player2_monster_list); // display the players and current pokemon
	int choice;
	int move_choice_damage;
	Monster target_monster = Monster("X", 1, 1, 1); //create a new temporary object of monster class

  if (current_player == "Player1")
	{
		target_monster = player2_monster_list.back();
	}
  else if (current_player == "Player2")
	{
		target_monster = player1_monster_list.back();
	}

  cout << "Which attack do you want to use? (1/2)" << endl; //asks user for the move to be used
	cin >> choice;
	
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
}

void Player::display(vector<Monster> player1_monster_list, vector<Monster> player2_monster_list) //Displays current status of both players and current pokemon
{
  cout << "Player1 \n" << player1_monster_list.back().name << " : " << player1_monster_list.back().health << endl;
  cout << endl;
  cout << "Player2 \n" << player2_monster_list.back().name << " : " << player2_monster_list.back().health << endl;
}
