// main file to compile the rest of the code

#include <iostream>
#include "monster.h"
#include "player.h"
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
    Player player = Player();

    player.Player1(player.player1_monster_list); //create player 1 monster list
    player.Player2(player.player2_monster_list); //create player 2 monster list

    bool game_over = false;
    int move_number = 0;

    while (game_over == false)
    {
        string current_player = player.current_player(move_number);
        string other_player;

        if (current_player == "Player1")
        {
            other_player = "Player2";
            Monster current_monster = player.player1_monster_list[player.player1_monster_list.size() - 1];
            player.attackChoice(current_monster, game_over);
            move_number += 1;

        }
        
        else
        {
            other_player = "Player1";
            Monster current_monster = player.player2_monster_list[player.player2_monster_list.size() - 1];
            player.attackChoice(current_monster, game_over);
            move_number += 1;
        }
        
    }

    return 0;
}

