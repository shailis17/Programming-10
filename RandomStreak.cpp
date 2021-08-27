/******************************************************************************

Shaili Soni
Random Streak
1/23/18

*******************************************************************************/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int userNum, outcome, count = 0, streak = 0, new_streak = 0;
    
    cout << "Input number between 1 - 10:";
    cin>> userNum;
    
    srand(time(0));
    
    if(userNum > 10 || userNum < 1)
    {
      
      cout << "Error: # is not between 1 - 10"<<endl;
    }
    
    else
    {
    
    for(int i = 0; i < 100; i++)
    {
      outcome = rand()%10+1;
      cout << outcome << endl;
      
      if(outcome == userNum)
      {
        count +=1;
        new_streak +=1;
      }
      else
      {
        if(new_streak > streak)
        {
          
          streak = new_streak;
        }
        
        new_streak = 0;
      }
    }
    }
    
    cout << "# of times " << userNum << " appears: "<< count << endl;
    cout <<"Longest Streak: "<< streak;
    
    return 0;
}
