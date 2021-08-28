/******************************************************************************

Shaili Soni
Even Or Odd
4/12/18

*******************************************************************************/

#include <iostream>
using namespace std;

void evenOrOdd(int x)
{
  if(x%2 == 0)
  {
    cout << "The number " << x << " is even";
  }
  
  else
  {
    cout << "The number " << x << " is odd";
  }
}

int main()
{
    int x;
    cout << "Enter a number:";
    cin >> x;
    
    evenOrOdd(x);
    return 0;
}
