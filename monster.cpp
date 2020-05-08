// file containing main monster.cpp function

#include <iostream>
#include "monster.h"
#include "player.h"

void Monster::attack(Monster source, Monster &target, int move_choice_damage, bool &game_over)
{
	bool game_over = false;
	Player player = Player();
	target.health -= move_choice_damage;
	cout << source.name << " dealt " << move_choice_damage << " to " << target.name << endl;
	// health has been detereorated after the attack
  //damage is done to other player's monster
  
    string target_player = player.player_name; //stores the name of current player in a string

	if (target.health <= 0)
	{
		cout << target.name << " has fainted!" << endl;
		if (target_player == "Player1")
		{
			//Write code to remove the monster from player1_monster_list
			//Also check if list is empty to declare other player as winner
			player.player1_monster_list.pop_back();
			if (player.player1_monster_list.size() == 0)
			{
				cout << "The winner is Player 2 !" << endl;
				game_over = true;
			}
			
		}
		else if (target_player == "Player2")
		{
			//Write code to remove the monster from player2_monster_list
			//Also check if list is empty to declare other player as winner
			player.player2_monster_list.pop_back();
			if (player.player2_monster_list.size() == 0)
			{
				cout << "The winner is Player 1 !" << endl;
				game_over = true;
			}
			
		}
		
		
	}
 
	//cout << target_player << "\n" << name << " health: " << health << endl; // displays monster name and remaining health
}

Monster::Monster(string newName, int newhealth, int newmove1_damage, int newmove2_damage) 
{
	name = newName;
	health = newhealth;
	move1_damage = newmove1_damage;
	move2_damage = newmove2_damage;
}
