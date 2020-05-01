// header file for player

#ifndef PLAYER_H
#define PLAYER_H

#include "Monster.h" 
#include "main.h"	

#include <iostream>
using namespace std;

class Player
{
	public:
		string name;
		int health;
		int damage;

		Player(string newname);

		void attack(Monster &target);
		
		void attacktype(Monster &target);

		void attackChoice(Player &C);
		
		void display();
  };

  #endif
