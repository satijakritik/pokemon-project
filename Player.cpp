// there are 2 players
// should be 3 functions in this .cpp file

# include "Player.h";

void Character::attack(Monster &target)  //function 1
{
  target.health -= damage;
  cout<<name<<" health: "<<health<<endl;
}


void Character::attacktype()       // function 2
{
  if(health == 0)
  // not sure what to do for this part
}

void Player::display()             // function 3
{
	cout<<name<<" health: "<<health<<endl;
}
