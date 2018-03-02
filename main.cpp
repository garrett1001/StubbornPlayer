#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
  SecretDoor game;
  int repeat;
  int won = 0;

  cout<<"how many times do you want to repeat the game?"<<endl;
  cin>>repeat;

  for(int i=0; i<repeat; i++)
  {
   game.newGame();
   game.guessDoorC();
   game.guessDoorC();

   if(game.isWinner() == true)
   {
    won++;
   }
  }

  cout<<"you have won "<<won<<" times"<<endl;
    
  return 0;
}
