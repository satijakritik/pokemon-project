// header file for player

#ifndef PLAYER_H
#define PLAYER_H

#include "Monster.h" 
#include "main.h"	

class Player
{
	public:
	int move_number = 0;
	const int size_of_list = 5;

	Player (); //constructor function

    string player_name = current_player(move_number);
	Monster player1_monster_list[5]; 
	Monster player2_monster_list[5]; 

	string current_player(int &move_number);
	//Function: Finds which player has to move next
	//Input: integer move number
	//Output: string "Player1" or "Player2"

	void display(Monster player1_monster_list[5], Monster player2_monster_list[5]);
	//Function: displays players and their current pokemon
	//Input: List of monsters for player 1 and player 2
	//Output: No return value, but prints out players and their current pokemon on screen

	void Player1 (Monster player1_monster_list[5]);//  Haven't made
	void Player2 (Monster player2_monster_list[5]);//  these functions yet

	void attackChoice(Monster monster);
	//Function: Checks which move to use for the monster
	//Input: current monster
	//Output: No return, but executes the attack
  };

  #endif
