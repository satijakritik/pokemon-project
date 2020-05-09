# makefile to compile the game

# object code file for menu
menu.o: menu.cpp menu.h
	g++ -pedantic-errors -std=c++11 -c menu.cpp

# object code file for Player
Player.o: Player.cpp Player.h monster.h
	g++ -pedantic-errors -std=c++11 -c player.cpp
    
# object code file for monster
monster.o: monster.cpp monster.h Player.h
	g++ -pedantic-errors -std=c++11 -c monster.cpp
    
# object code file for main
main.o: main.cpp menu.h monster.h Player.h
	g++ -pedantic-errors -std=c++11 -c main.cpp

main: main.o menu.o Player.o monster.o 
	g++ -pedantic-errors -std=c++11 menu.o Player.o monster.o main.o -o main

# delete all the object files and executables
clean:
	rm *.o main

#specifying that clean is a phony target
.PHONY: clean
