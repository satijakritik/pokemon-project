# makefile to compile the game

# object code file for menu
menu.o: menu.cpp menu.h
  g++ -c menu.cpp

# object code file for Player
Player.o: Player.cpp Player.h monster.h
  g++ -c player.cpp
    
# object code file for monster
monster.o: monster.cpp monster.h Player.h
  g++ -c monster.cpp
    
# object code file for main
main.o: main.cpp menu.h monster.h Player.h
  g++ -c main.cpp

main: main.o menu.o Player.o monster.o 
  g++ menu.o Player.o monster.o main.o -o main

clean:
  rm *.o main
	
.PHONY: clean
