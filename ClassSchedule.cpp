/******************************************************************************

Shaili Soni
Class Schedule
1/2/18

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int period;
    
    cout << "What period are you in right now?";
    cin >> period;
    
    switch(period)
    {
      case 1:
      cout << "You are in English";
      break;
      
      case 2:
      cout << "You are in French";
      break;
      
      case 3:
      cout << "You are in Driver's Education";
      break;
      
      case 4:
      cout << "You are in lunch. Bon Appetite!";
      break;
      
      case 5:
      case 6:
      cout << "You are in History";
      break;
      
      case 7:
      case 8:
      cout << "You are in Math";
      break;
      
      case 9:
      case 10:
      cout << "You are coding in C++";
      break;
      
      case 11:
      cout << "You are relaxing in Study Hall... Unless it's thursday... GO TO LAB";
      break;
      
      case 12:
      cout << "You are in Chem";
      break;
    }
    
    return 0;
}
