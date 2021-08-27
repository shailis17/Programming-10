#include <iostream>
using namespace std;

int main() 
{
  //initialize variables
  int num, div;
  bool prime = true;
  
  //get inputs
  cout << "Enter a number: ";
  cin >> num;
  
  //determine if the number is prime.
  for(int x = 2; x < num; x++)
  {
    if(num % x == 0)
    {
      prime = false;
      div = x;
    }
  } 
  
  if(num == 0)
  {
    cout << "O is composite.";
  }
  else if(num == 1)
  {
    cout << "1 is neither composite or prime.";
  }
  else if(prime)
  {
    cout << num << " is prime.";
  }
  else
  {
    cout << num << " is composite because it is divisible by " << div;
  }
  
  
  return 0;
}
