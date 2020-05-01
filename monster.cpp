// file containg main monster.cpp function

#include "Monster.h"
#include "Player.h"

void Monster::attack(Player &target)
{
	target.health -= damage;
	// health has been detereorated after the attack
  //damage is done to other player's monster
 
	cout<<name<<" health: "<<health<<endl; // displays monster name and remaining health
}

Monster::Monster(string newName, int newhealth, int newdamage) 
{
	health = newhealth;
	damage = newdamage;
}
