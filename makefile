# makefile to compile the game

# object code file for menu
menu.o: menu.cpp menu.h
	g++  -pedantic-errors -std=c++11 -c menu.cpp

# object code file for Player
Player.o: Player.cpp Player.h Monster.h
	g++ -pedantic-errors -std=c++11 -c player.cpp
    
# object code file for monster
monster.o: monster.cpp Monster.h Player.h
	g++ -pedantic-errors -std=c++11 -c monster.cpp
    
# object code file for main
main.o: main.cpp menu.h Monster.h Player.h
	g++ -pedantic-errors -std=c++11 -c main.cpp

main: main.o menu.o Player.o monster.o 
	g++ -pedantic-errors -std=c++11 menu.o Player.o monster.o main.o -o main

clean:
	rm *.o main
	
.PHONY: clean
