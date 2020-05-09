// header file for monster.cpp

#ifndef MONSTER_H
#define MONSTER_H

#include <vector>

using namespace std;
class Monster
{
  public:
    string name;
    int health;
    int move1_damage;
    int move2_damage;
    // two integer variables to track damage dealed in each player's move
  
    Monster (string newName, int newhealth, int newmove1damage, int newmove2damage); // constructor function
    void attack (Monster Monster1, Monster &Monster2, int move_choice, bool game_over, vector<Monster> &player1_monster_list, vector<Monster> &player2_monster_list, string current_player);
    // calls main attack function 
  
};

#endif







