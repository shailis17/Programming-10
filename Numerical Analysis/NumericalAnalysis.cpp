/*****************************************************************************

Shaili Soni
Numerical Analysis
11/14/17

*****************************************************************************/

#include <iostream>
using namespace std;

int main ()
{
  //declare variable
  int num;
  
  //get input
  cout << "Enter an integer: ";
  cin >> num;
  
  //handle input and Print Results
  //natural or negative?
  if(num > 0)
  {
    
    cout << num << " is a natural number"<<endl;
  }
  
  if(num < 0)
  {
    
    cout << num << " is a negative number"<<endl;
  }
  
  //even?
  if(num%2 == 0)
  {
    
    cout<<num<< " is an even number"<<endl;
  }
  
  if(num%2 != 0)
  {
    
    cout<<num<< " is not an even number"<<endl;
  }
  
  //divisible by 3
  if(num%3 ==0)
  {
    cout << num << " is divisible by 3" << endl;
  }
  
  if(num%3 !=0)
  {
    cout << num << " is not divisible by 3" <<endl;
  }
  
}
