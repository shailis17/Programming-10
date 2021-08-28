#include <iostream>
#include <cstdlib>

using namespace std;

void roll(int sides, int times);
int main()
{
  int sides, times;
  
  cout << "Number of sides:"<<endl;
  cin >> sides;
  
  cout << "Number of times"<<endl;
  cin >> times;
  
  roll(sides, times);
  
  return 0;
}

void roll(int sides, int times)
{
  int dice1, dice2;
  for(int i=1; i <= times; i++)
  {
    dice1 = rand()%sides+1;
    dice2 = rand()%sides+1;
    cout << "Roll " << i << ": ";
    cout << dice1 << " and " << dice2 << endl;
  }
}
