## Group Members
  
 1. Name: Shriya Bedi, UID: 3035663502
 2. Name: Kritik Satija, UID: 3035666645

## Game description

It is a two player game based on the concept used in Pokemon, where each player is randomly assigned n numbner of Pokemons from a pre existing database, and then they carry out attacks on each other, aiming to lower the health of the other player so that it can ultimately reach zero and the pokemon is destroyed. In this &nbsp;&nbsp;case, if the player has any more monsters left, they can be used until their health also depletes. The monsters start with &nbsp;&nbsp;a maximum amount of health, and the first player to exhaust all monsters loses the game.

## Features/ functions to be implemented

The game will include the following features :-

   1. Random selection of pokémons for both the players that will be stored in an array.
   
   2. A file will be used to store the input that the user enters. This input will be the number of pokémons that both players will recieve for every battle.
   
   3. Pointers and dynamic memory will be used to store the same number of pokémons that the player enters in the game settings in run-time.
   
   4. The number of pokémons entered in the game settings will be stored in a file and loaded using file I/O.
   
   5. The code will be distributed into multiple files, separately for functions that will have their own cpp and header files (.h). A Makefile will also be included in the repository.

Some of the important functions that the code will include are :-
   1. `show_main_menu()` - This will print out the main menu screen. It will then ask for an integer input from the player using `cin` and call other functions like `game_settings()` depending on the integer. 
   
   2. `game_settings()` - This will print the game setting screen and give the option of changing the number of pokémon for battles.
   
   3. `show_player_options()` - This will print out the player options screen. It will then ask for an integer input from the player using `cin` and call other functions like `fight()` depending on the integer.
   
   4. `fight()` - This will display the move set for the pokémon and ask for an integer input from player. The pokémon will then perform the selected move and deal damage.
   
   5. `quit_match()` - This will ask for confirmation to quit. On confirming, the player will have forfeited the match and will be returned to the main menu screen.
   
   6. `quit_game()` - This will ask for confirmation to quit. On confirming, the game will end.

Apart from these, the code will also include the use of classes. Every pokémon will have its own class, that will contain variables for its health, move set and type (eg. fire, water, air, etc.).

## Flow of the Game

![Second Draft of gameflow](https://raw.githubusercontent.com/satijakritik/images/master/pokémon_second_draft_flowchart.png?token=ANKJCU6T3YFFLYFM5C6HK2C6TGJX6)
