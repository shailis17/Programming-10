/******************************************************************************
Shaili Soni
Factors of a Number
1/10/17
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int number;
    
    cout << "Enter a positive integer:";
    cin >> number;
    
    cout << "The factors of the number are:" << endl;
    
    for(int x = 1; x <= number; x++)
    {
      if(number%x == 0)
      {
        cout << x << endl;
      }
    }
    
    
    return 0;
}
