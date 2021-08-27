/******************************************************************************

Shaili Soni
Better Average
3/6/18

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    double num, sum, avg;
    int count;
    count = 0;
    
    cout << "Enter numbers. (Enter a negative number to stop)";
        
    while(count != -1)
    {
      
      cin >> num;
      
      if(num < 0)
      {
        
        count = -1;
      }
      else
      {
        sum += num;
        count ++;
        avg = sum /count;
      }
    
    }
    
    cout << avg;
    
    return 0;
}
