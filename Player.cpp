// there are 2 players
// should be 3 functions in this .cpp file

#include <iostream>
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

void Player::Player1 (Monster player1_monster_list)
{
  ;
}

void Player::Player2 (Monster player2_monster_list)
{
  ;
}

/*
void Player::attack(Monster &target)  //function 1
{
  target.health -= damage;
  cout << name << " health: " << health << endl;
}


void Player::attacktype(Monster &target)       // function 2
{
  if(target.health == 0)
  {
    // not sure what to do for this part
  }

}

void Player::display()             // function 3
{
	cout << name << " health: " << health <<endl;
}
*/