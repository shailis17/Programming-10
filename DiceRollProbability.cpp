/******************************************************************************

Shaili Soni
Dice Roll Probability
1/18/18

*******************************************************************************/
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int desire, dice1, dice2;
    int outcome = 0;
    int roll_num = 50;
    
    cout << "What number do you want to roll?";
    cin >> desire;
    
    srand(time(0));

      
    for(int roll=1; roll <=50; roll++)
    {
      int dice1= rand()%6+1;
      int dice2= rand()%6+1;
      
      cout << "Roll #" << roll << ": " << dice1 << " and " << dice2 << " Outcome: " << dice1+dice2;
       
       if(desire == (dice1 + dice2))
       {
         cout << "***" << endl;
       }
      else
      {
        cout << endl;
      }
      
      if((dice1 + dice2) == desire)
      {
      outcome += 1;
        
        if(roll_num >= roll)
         {
          roll_num = roll;
         }
      }
      
    }
    
  
    cout << "Number of times computer rolled "<< desire << ": "<< outcome << endl;
    cout << "Percentage of rolls that were "<< desire << ": "<< outcome*100/50 << "%"<<endl;
    cout << "The first time that " << desire << " was rolled was on Roll #:" << roll_num;
    
    return 0;
}
