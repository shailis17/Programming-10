/******************************************************************************

Shaili Soni
Reverse Array
5/30/18

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
  int numbers[10] = {14, 63, 22, 19, 85, 53, 42, 99, 11, 4};
  
  cout << "Array printed regularly:" << endl;
  for(int i = 0; i < 10; i++)
  {
    cout << numbers[i] << " ";
  }
  cout << endl << endl;
  
  cout << "Array printed backwards:" << endl;
  for(int x = 9; x >= 0; x--)
  {
    cout << numbers[x] << " ";
  }
    
  return 0;
}
