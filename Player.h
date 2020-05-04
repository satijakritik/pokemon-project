// header file for player

#ifndef PLAYER_H
#define PLAYER_H

#include "Monster.h" 
#include "main.h"	
#include <string>

//#include <iostream>
//using namespace std;

class Player
{
	public:
	int move_number = 0;
	const int size_of_list = 5;

	Player (); //constructor function

	string current_player(int &move_number);
	/*
	{
		if (move_number % 2 == 0)
		{
			move_number += 1;
			return "Player1";
		}
		move_number += 1;
		return "Player2";
		
	}
	*/
	/*
		string name;
		int health;
		int damage;

		Player(string newname);

		void attack(Monster &target);
		
		void attacktype(Monster &target);

		void attackChoice(Player &C);
	*/	

    string player_name = current_player(move_number);
	Monster player1_monster_list[5]; 
	Monster player2_monster_list[5]; 

	void display(Monster player1_monster_list[5], Monster player2_monster_list[5]);
	void Player1 (Monster player1_monster_list[5]);
	void Player2 (Monster player2_monster_list[5]);

	void attackChoice(Monster monster);
  };

  #endif
