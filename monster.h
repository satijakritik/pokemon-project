// header file for monster.cpp
// includes class

#include <iostream>
#include “main.h”     //to be created later, for main compilation

using namespace std;
class Monster
{
  string name;
  int health;
  int damage;
  Monster (string newName, int newhealth, int newdamage); // constructor function
  void attack (&Player);
};