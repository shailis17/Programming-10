/******************************************************************************

Shaili Soni
Largest and Smallest
5/31/18

*******************************************************************************/

#include <iostream>

using namespace std;

int largeelement(int Array[], int value)
{
  int large = Array[0];
  for(int i=0; i<value; i++)
  {
    if(Array[i]>large)
    {
      large=Array[i];
    }
  }
  return large;
}

int smallelement(int Array[], int value)
{
  int small = Array[0];
  for(int i=0; i<value; i++)
  {
    if(Array[i]<small)
    {
      small=Array[i];
    }
  }
  return small;
}

int index(int Array[], int value, int number)
{
  for(int i=0; i< value; i++)
  {
    if(Array[i]==number)
    {
      return i;
    }
  }
}

int main()
{
  int amount=10, big, tiny, bigger, smaller;
  int num[amount] = {14,63,22,19,85,53,42,99,11,4};

  big = largeelement(num, amount);
  bigger = index(num,amount,big);
  
  cout << "The largest number is " << big << endl;
  cout << "Index: " << bigger << endl;
  cout << " " << endl;
  
  tiny = smallelement(num, amount);
  smaller = index(num, amount, tiny);
  
  cout << "The smallest number is " << tiny << endl;
  cout << "Index: " << smaller << endl;
  return 0;
}
