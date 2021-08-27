/******************************************************************************

Shaili Soni
Random Test Answers
1/26/18

*******************************************************************************/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    
    srand(time(0));
    
    for(int a=0; a <= 30; a++)
    {
      
      int choice;
      choice =  rand()%5+1;
      
      switch (choice)
      {
        case 1:
        cout << "A" << endl;
        break;
        
        case 2:
        cout << "B" << endl;
        break;
        
        case 3:
        cout << "C" << endl;
        break;
        
        case 4:
        cout << "D" << endl;
        break;
        
        case 5:
        cout << "E" << endl;
        break;
        
      }
      
    }
    
    
    
    return 0;
}

