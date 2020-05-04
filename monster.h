// header file for monster.cpp
// includes class

//#include “main.h”     //to be created later, for main compilation
#ifndef MONSTER_H
#define MONSTER_H

using namespace std;
class Monster
{
  public:
    string name;
    int health;
    int move1_damage;
    int move2_damage;
    Monster (string newName, int newhealth, int newmove1damage, int newmove2damage); // constructor function
    void attack (Monster Monster1, Monster &Monster2, int move_choice);
};

#endif
