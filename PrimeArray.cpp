/******************************************************************************

Shaili Soni
Prime Array
5/29/18

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
  int numPrimes = 25;
  int primes[numPrimes] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53,59, 61, 67, 71, 73, 79, 83, 89, 97};
  
  cout << "Prime numbers between 2-100: \n";
  
  for(int i = 0; i < numPrimes; i++)
  {
    cout << primes[i] << ", " ;
  }
  
  return 0;
}
