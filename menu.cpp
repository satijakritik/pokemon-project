#include <iostream>
#include <iomanip>
#include <stdlib.h>

#include "menu.h"
using namespace std;

void menu() 
{
  for (int i = 0; i < 70; i++)
  {
    cout << "-";
  }
  cout<<endl;
  
  cout<< "  _   _   _   _   _   _   _     _   _     _   _   _   _   _   _   _   _" <<endl ;

  cout<<" / \\ / \\ / \\ / \\ / \\ / \\ / \\   / \\ / \\   / \\ / \\ / \\ / \\ / \\ / \\ / \\ / \\ ";
  cout<<endl;
  
  //cout<< " / \ / \ / \ / \ / \ / \ / \   / \ / \   / \ / \ / \ / \ / \ / \ / \ / \ "<<endl;
  cout<< "( W | e | l | c | o | m | e ) ( t | o ) ( P | o | k | e | m | o | n | ! )";
  cout<<endl;

  cout<<" \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ \\_/   \\_/ \\_/   \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ ";
  cout<<endl;

  //cout<<" \_/ \_/ \_/ \_/ \_/ \_/ \_/   \_/ \_/   \_/ \_/ \_/ \_/ \_/ \_/ \_/ \_/ "<<endl;
  cout<<endl;

  cout << setw(53)<< "DO YOU DARE TO MEET THE CHALLENGE?\n"<<endl;
  for (int i = 0; i < 70; i++)
  {
    cout << "-";
  }
  // finishes printing the welcome title design 
  
  cout<<endl;
  cout<<setw(45)<< "   _   _   _   _   _  ";
  cout<<endl;
  cout<< setw(45)<< "  / \\ / \\ / \\ / \\ / \\ ";
  cout<<endl;
  cout<< setw(45)<<" ( R | U | L | E | S )";
  cout<<endl;
  cout<< setw(45)<<"  \\_/ \\_/ \\_/ \\_/ \\_/ "<<endl;
  cout<<endl;

  for (int i = 0; i < 70; i++)
  {
    cout << "-";
  }
  cout<<endl;
  // finishes printing the rules design 
  
  // displays list of rules in the game  
  cout<<endl;
  cout<< " (1)  Pokemons will be randomly assigned to both players.\n";
  cout<<endl;
  cout<< " (2)  The players will attack each others Pokemons turn by turn.\n";
  cout<<endl;
  cout<< " (3)  The health of the Pokemons will deplete as they absorb damage.\n";
  cout<<endl;
  cout<< " (4)  When health of a Pokemon reaches zero, it expires.\n";
  cout<<endl;
  cout<< " (5)  In such an event, the player may choose another Pokemon.\n";
  cout<<endl;
  cout<< " (6)  The player with Pokemons left at the end wins.\n";
  cout<<endl;
  cout<< " (7)  The list of Pokemons is mentioned below.\n";cout<<endl;
  for (int i = 0; i < 70; i++)
  {
    cout << "-";
  }
  cout<<endl;
  cout<<"Enter any letter to proceed"<<endl;
  char c;
  if (cin>>c)
    system ("clear");
  
  // the above information displayed clears to a new screen
  
  for (int i = 0; i < 70; i++)
  {
    cout << "-";
  }
  cout<<endl;

  cout<<"  _   _   _   _   _     _   _     _   _   _   _   _   _   _   ";
  cout<<endl;

  cout<<" / \\ / \\ / \\ / \\ / \\   / \\ / \\   / \\ / \\ / \\ / \\ / \\ / \\ / \\  ";
  cout<<endl;
  cout<< "( T | y | p | e | s ) ( o | f ) ( P | o | k | e | m | o | n )";
  cout<<endl;
  cout<<" \\_/ \\_/ \\_/ \\_/ \\_/   \\_/ \\_/   \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ \n";
  cout<<endl;

  for (int i = 0; i < 70; i++)
  {
    cout << "-";
  }
  cout<<endl;
  // prints decorative title on new screen
  
  // prints types of pokemons in the generator
  cout<<endl;
  cout<<"(1) ARCEUS: The God of the Pokemon universe. \n";
  cout<<setw(16)<<"DAMAGE: 30 \n";
  cout<<endl;
  cout<<"(2) DIALGA: The lord of Time. Very Powerful. \n";
  cout<<setw(16)<<"DAMAGE: 25 \n";
  cout<<endl;
  cout<<"(3) PALKIA: The lord of Space. Very Powerful. \n";
  cout<<setw(16)<<"DAMAGE: 25 \n";
  cout<<endl;
  cout<<"(4) MEWTWO: Considered the strongest Pokemon. \n";
  cout<<setw(16)<<"DAMAGE: 25 \n";
  cout<<endl;
  cout<<"(5) BLAZIKEN: Fire type Pokemon. Deadly. \n";
  cout<<setw(16)<<"DAMAGE: 20 \n";
  cout<<endl;
  cout<<"(6) LUXRAY: Electric type Pokemon. Dangerous. \n";
  cout<<setw(16)<<"DAMAGE: 20 \n";
  cout<<endl;
  cout<<"(7) LUCARIO: Fighting and steel Pokemon. Controls auras. \n";
  cout<<setw(16)<<"DAMAGE: 20 \n";
  cout<<endl;
  cout<<"(8) GIRATINA: Satan of Pokemon universe. Very evil. \n";  
  cout<<setw(16)<<"DAMAGE: 30 \n";
  cout<<endl;
  cout<<"(9) LUGIA: The diving Pokemon. Causes storms. \n";
  cout<<setw(16)<<"DAMAGE: 25 \n";
  cout<<endl;
  cout<<"(10)SNOM: Ice type Pokemon. Very friendly. \n";
  cout<<setw(16)<<"DAMAGE: 15 \n"; 

  for (int i = 0; i < 70; i++)
  {
    cout << "-";
  }
  cout<<endl;
  // finishes printing final dash line, menu complete

}
