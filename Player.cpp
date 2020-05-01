// there are 2 players
// should be 3 functions in this .cpp file

#include "Player.h"
#include "monster.h"

void Player::attack(Monster &target)  //function 1
{
  target.health -= damage;
  cout<<name<<" health: "<<health<<endl;
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
	cout<<name<<" health: "<<health<<endl;
}
