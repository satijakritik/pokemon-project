// header file for player

#define Character_h

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
		
		void display();
  };
