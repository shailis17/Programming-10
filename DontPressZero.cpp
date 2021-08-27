/******************************************************************************

Shaili Soni
Don't Press Zero
2/14/18

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
  int num;
  cout << "Enter a number! Please Do Not Make It Zero... ";
  cin >> num;
  
  while(num != 0)
  {
    {
      cout << "Yay! You can follow directions ヽ(´▽｀)ノ"<<endl;
      cout << "Enter another number! Please Do Not Make It Zero... ";
      cin >> num;
    }
  }
  cout << "Seriously, I'm asking you not to pick 0. A 5 year old follows directions better than you (Ծ‸ Ծ)\n";
  
    return 0;
}

