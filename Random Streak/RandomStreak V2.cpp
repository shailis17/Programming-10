/******************************************************************************

Shaili Soni
Random Streak V2
1/23/18

*******************************************************************************/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int outcome, count = 0, streak = 1, new_streak = 1, previous = 0, longest_num;
    
    srand(time(0));
    
    for(int i = 0; i < 100; i++)
    {
      
      outcome = rand()%5+1;
      
      cout << outcome<<endl;
    

       if(outcome == previous)
          {
            
            new_streak +=1;
            
            if(new_streak > streak)
            {
              streak = new_streak;
              longest_num = outcome;
            }
           
            
          }
          else
          {
            new_streak = 1;
          }
          
      
       previous = outcome;     
    }
    
    cout <<"Longest Streak: "<< streak << " with number " << longest_num;
    
    return 0;
}
