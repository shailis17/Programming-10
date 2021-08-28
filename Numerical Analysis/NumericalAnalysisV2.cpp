/******************************************************************************

Shaili Soni 
Numerical Analysis V2
5/3/18

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
      cout << num << " is a prime number" << endl;
    }
    else
    {
      cout << "" << endl;
      cout << num << " is a composite number" << endl;
    }
  }
  
  void odd_even(int num)
  {
    if(num%2 == 0)
  {
    cout << "The number " << num << " is even" << endl;
  }
  
  else
  {
    cout << "The number " << num << " is odd";
  }
  }
  
  void factorization(int num)
  {
    int factor = 2;
    
    cout << "The prime factorization of " << num << " is 1";
    while (factor <= num)
    {
    if(num % factor == 0)
    {
     cout << " * " << factor; 
     num/=factor;
    }  
    else
      factor++;
    }
  }
  
  
 int main()
  {
    int num;
    cout << "Enter a number:";
    cin >> num;
    prime(num);
    odd_even(num);
    factorization(num);
  }
