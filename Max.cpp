/******************************************************************************

Shaili Soni
Max
4/11/18

*******************************************************************************/

#include <iostream>
using namespace std;

double x,y;
void max(double x, double y)
{  
  if(x < y)
  {
    cout << y << " is greater than "<<x;
  }
  else if(y < x)
  {
    cout << x << " is greater than "<<y;
  }
  else if(y == x)
  {
    cout << x << " is equal to "<< y;
  }
}

int main()
{
    cout << "Input 2 numbers"<<endl;
    cin >> x >> y;
  
    max(x, y);
    return 0;
}
