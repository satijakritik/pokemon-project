// file containing main monster.cpp function

#include <iostream>
#include "monster.h"
#include "Player.h"

//import Player.h
//as file makes use of the Player class

void Monster::attack(Monster source, Monster &target, int move_choice_damage, bool game_over, vector<Monster> &player1_monster_list, vector<Monster> &player2_monster_list, string current_player)
{
	Player player = Player();
	string other_player;
	if (current_player == "Player1")
	{
		other_player = "Player2";
		player2_monster_list.back().health -= move_choice_damage;
		if (player2_monster_list.back().health < 0)
		{
			player2_monster_list.back().health = 0;
		}
		
	}
	else
	{
		other_player = "Player1";
		player1_monster_list.back().health -= move_choice_damage;
		if (player1_monster_list.back().health < 0)
		{
			player1_monster_list.back().health = 0;
		}
	}
	
	
	
	target.health -= move_choice_damage;
	cout << source.name << " dealt " << move_choice_damage << " damage" << " to " << target.name << endl;
	
	// health has been detereorated after the attack
	
  //damage is done to other player's monster
  
    string target_player = other_player; 
    //stores the name of current player in a string

	if (target.health <= 0)
	{
		cout << target.name << " has fainted!" << endl;
		cout << endl;
		//signifies end of a pokemon to the players
		
		cout << "Enter any letter to proceed" << endl;
		char c;
		
		if (cin >> c)
		{
			system ("clear");
		
		// according to the rules, once all pokemons finish, player loses
			
    		if (target_player == "Player1")
		    {
			    //Write code to remove the monster from player1_monster_list
			    //checks if list is empty to declare other player as winner
			
			    player1_monster_list.pop_back();
			    if (player1_monster_list.size() == 0)
			    {
			    	cout << "The winner is Player 2 !" << endl;
			    	game_over = true;
			    	exit(1);
			    }
			
		    }
			
		    else if (target_player == "Player2")
		    {
			    //Write code to remove the monster from player2_monster_list
			    //checks if list is empty to declare other player as winner
			    
			    player2_monster_list.pop_back();
			    if (player2_monster_list.size() == 0)
			    {
				    cout << "The winner is Player 1 !" << endl;
				    game_over = true;
				    exit(1);
			    }
		    }
			
		// depending on target player, checks for empty list
		
		}
		
		if (target_player == "Player1")
		{
			//Write code to remove the monster from player1_monster_list
			//checks if list is empty to declare other player as winner
			
			player1_monster_list.pop_back();
			if (player1_monster_list.size() == 0)
			{
				cout << "The winner is Player 2 !" << endl;
				game_over = true;
				exit(1);
			}
			
		}
		
		else if (target_player == "Player2")
		{
			//Write code to remove the monster from player2_monster_list
			//checks if list is empty to declare other player as winner
			
			player2_monster_list.pop_back();
			if (player2_monster_list.size() == 0)
			{
				cout << "The winner is Player 1 !" << endl;
				game_over = true;
				exit(1);
			}
			
		}
		
		
	}
 
	//cout << target_player << "\n" << name << " health: " << health << endl; // displays monster name and remaining health
}

//end of attack function

Monster::Monster(string newName, int newhealth, int newmove1_damage, int newmove2_damage) 
{
	name = newName;
	health = newhealth;
	move1_damage = newmove1_damage;
	move2_damage = newmove2_damage;
}

// function to assign the updated values for the next attack


