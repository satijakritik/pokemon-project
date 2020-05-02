// file containing main monster.cpp function

#include <iostream>
#include "Monster.h"
#include "Player.h"

void Monster::attack(Monster &source, Monster &target)
{
	target.health -= source.damage;
	Player player = Player();
	// health has been detereorated after the attack
  //damage is done to other player's monster
    string target_player = player.player_name; //stores the name of current player in a string
 
	cout << target_player << "\n" << name << " health: " << health << endl; // displays monster name and remaining health
}

Monster::Monster(string newName, int newhealth, int newdamage) 
{
	health = newhealth;
	damage = newdamage;
}
