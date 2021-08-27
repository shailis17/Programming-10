/******************************************************************************

Shaili Soni
Guess My Number
3/15/18

*******************************************************************************/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int num, mynum, guess;
    cout << "Guess my number."<<endl;
    
    srand(time(0));
    mynum = rand()%100+1;
    
    do
    {
     
      cin >> num; 
      
      if(num != mynum)
      {
        
        guess++;
        if(num > mynum)
        {
          
          cout << "Your number is too high"<<endl;
        }
        else
        {
          
          cout << "Your number is too low"<<endl;
        }
        
      }
      else
      {
        
        cout << "Good Job! You guessed the number! Bravo 👏"<<endl;
        
        guess = 11;
      }
      
    }while(guess < 10);
    
    if(guess != 11)
    {
      
      cout << "You Lose! You couldn't guess my number after 10 tries.👎"<<endl;
    }
    
    return 0;
}
