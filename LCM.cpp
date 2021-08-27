/******************************************************************************

Shaili Soni
Least Common Multiple
2/5/18

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    
    cout << "Insert 2 integers";
    cin >> num1 >> num2;
    
    if(num1 > num2)
    {
      
      for(int i = num1; i <= num1*num2; i++)
      {
    
        if(i%num1 == 0 && i%num2 == 0)
        {
          
          cout << "LCM is "<< i;
          return 0;
        }
      }
    }
    else if(num2 > num1)
    {
      
      for(int i = num2; i <= num1*num2; i++)
      {
        
        if(i%num1 == 0 && i%num2 == 0)
        {
          
          cout << "LCM is "<< i;
          return 0;
        }
      }
    }
    else
    {
      cout << "LCM is: " << num1*num2;
    }
    
    return 0;
}
