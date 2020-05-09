// main file to compile the rest of the code

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "monster.h"
#include "Player.h"
#include "menu.h"
// importing all header files needed for compilation

using namespace std;

int main ()
{
    //menu started
    char choice;
    int num_of_pokemon;
    ifstream fin;
    ofstream fout;

    fin.open("save.txt"); //load the file
    if (fin.fail())
    {
        cout << "Error in file opening" << endl;
        exit(1);
    }
    fin >> num_of_pokemon;

    fin.close();

    menu();
    
    cout << "(1) Start the game" << endl;
    cout << "(2) Game settings" << endl;
    cout << "(3) Quit game" << endl;

    cin >> choice;
    while (choice != '1')
    {
        switch (choice)
        {
        case '1':
            system ("clear");
            break;

        case '2':
            system ("clear");
            fout.open("save.txt"); //save the file
            if (fout.fail())
            {
                cout << "Error in file opening" << endl;
                exit(1);
            }
            cout << "Enter the number of pokemon for each player (max. 5) " << endl;
            cout << " (Current setting: " << num_of_pokemon << ") ";
            cin >> num_of_pokemon;
            fout << num_of_pokemon;

            fout.close();

            menu();
            cout << "(1) Start the game" << endl;
            cout << "(2) Game settings" << endl;
            cout << "(3) Quit game" << endl;
            cin >> choice;
            break;

        case '3':
            exit(1);
            break;
    
        default:
            cout << "Please enter valid input" << endl;
            cin >> choice;
            break;
        }
    }
    
    system ("clear");
    //end of menu

    //Game has started
    Player player;

    bool game_over = false;
    // game_over is a checker in place to keep a track of when a player wins
    
    int move_number = 0;

    fin.open("save.txt"); //load the file
    if (fin.fail())
    {
        cout << "Error in file opening" << endl;
        exit(1);
    }
    fin >> num_of_pokemon;

    fin.close();

    Monster complete_monster_list[10] = {Monster("Arceus", 100, 30, 30), Monster("Dialga", 100, 25, 25), Monster("Palkia", 100, 25, 25), Monster("Mewtwo", 100, 25, 25), Monster("Blaziken", 100, 20, 20), Monster("Luxray", 100, 20, 20), Monster("Lucario", 100, 20, 20), Monster("Giratina", 100, 30, 30), Monster("Lugia", 100, 25, 25), Monster("Snom", 100, 15, 15)};

    vector<Monster> player1_monster_list;
    vector<Monster> player2_monster_list;

    int random_number;

    srand(time(NULL)); //randomize the pokemon given to each player

    for (int i = 0; i < num_of_pokemon; i++)
    {
        random_number = rand() % 10;
        player1_monster_list.push_back(complete_monster_list[random_number]);
    }
    for (int i = 0; i < num_of_pokemon; i++)
    {
        random_number = rand() % 10;
        player2_monster_list.push_back(complete_monster_list[random_number]);
    }
    
    
    //while the game is still running and there is no winner;
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

