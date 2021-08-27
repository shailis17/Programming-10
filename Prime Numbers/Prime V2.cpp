/******************************************************************************

Shaili Soni 
Prime V2
4/13/18

*******************************************************************************/

#include <iostream>

using namespace std;

void prime(int num)
{
  bool prime = true;
  for(int x =2; x < num; x++)
  {
    if(num<0)
    {
      prime = false;
    }
    else if(num%x==0)
    {
      prime = false;
    }
  }
  if(prime)
  {
    cout << "" << endl;
    cout << num << " is a prime number.";
  }
  else
  {
    cout << "" << endl;
    cout << num << " is a composite number.";
  }
}
int main()
{
  int num;
  cout << "Enter a number:";
  cin >> num;
  prime(num);
}
