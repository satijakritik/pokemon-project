// main file to compile the rest of the code

#include <iostream>
#include <vector>
#include "monster.h"
#include "Player.h"
#include "menu.h"

using namespace std;

int main ()
{
    //menu started
    int choice;
    menu();
    
    cout << "Press 1 to start the game" << endl;

    cin >> choice;
    while (choice != 1)
    {
        cout << "Invalid Input. Try again" << endl;
        cin >> choice;
    }
    system ("clear");
    //end of menu

    //Game has started
    Player player;

    //player.Player1(player.player1_monster_list); //create player 1 monster list
    //player.Player2(player.player2_monster_list); //create player 2 monster list

    bool game_over = false;
    int move_number = 0;

    Monster complete_monster_list[10] = {Monster("Arceus", 100, 30, 30), Monster("Dialga", 100, 25, 25), Monster("Palkia", 100, 25, 25), Monster("Mewtwo", 100, 25, 25), Monster("Blaziken", 100, 20, 20), Monster("Luxray", 100, 20, 20), Monster("Lucario", 100, 20, 20), Monster("Giratina", 100, 30, 30), Monster("Lugia", 100, 25, 25), Monster("Snom", 100, 15, 15)};

    vector<Monster> player1_monster_list;
    vector<Monster> player2_monster_list;

    player1_monster_list.push_back(complete_monster_list[0]);
    player1_monster_list.push_back(complete_monster_list[1]);
    player1_monster_list.push_back(complete_monster_list[2]);

    player2_monster_list.push_back(complete_monster_list[3]);
    player2_monster_list.push_back(complete_monster_list[4]);
    player2_monster_list.push_back(complete_monster_list[5]);

    while (game_over != true)
    {
        string current_player = player.current_player(move_number);
        string other_player;

        if (current_player == "Player1")
        {
            other_player = "Player2";
            Monster current_monster = player1_monster_list.back();
            player.attackChoice(current_monster, game_over, player1_monster_list, player2_monster_list, current_player);
        }
        
        else
        {
            other_player = "Player1";
            Monster current_monster = player2_monster_list.back();
            player.attackChoice(current_monster, game_over, player1_monster_list, player2_monster_list, current_player);
        }
        
    }

    return 0;
}

