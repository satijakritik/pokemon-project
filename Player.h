// header file for player

#ifndef PLAYER_H
#define PLAYER_H

#include "monster.h" 
#include <string>	
#include <vector>

class Player
{
	public:
	int move_number = 0;

	//Player (); //constructor function

    string player_name = current_player(move_number);

	vector<Monster> player1_monster_list; 
	vector<Monster> player2_monster_list; 

	string current_player(int &move_number);
	//Function: Finds which player has to move next
	//Input: integer move number
	//Output: string "Player1" or "Player2"

	void display(vector<Monster> player1_monster_list, vector<Monster> player2_monster_list);
	//Function: displays players and their current pokemon
	//Input: List of monsters for player 1 and player 2
	//Output: No return value, but prints out players and their current pokemon on screen
    /*
	void Player1 (vector<Monster> &player1_monster_list);//  Haven't made
	void Player2 (vector<Monster> &player2_monster_list);//  these functions yet
    */
	void attackChoice(Monster monster, bool game_over, vector<Monster> &player1_monster_list, vector<Monster> &player2_monster_list, string current_player);
	//Function: Checks which move to use for the monster
	//Input: current monster
	//Output: No return, but executes the attack
  };

  #endif
