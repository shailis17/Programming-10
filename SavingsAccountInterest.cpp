/******************************************************************************

Shaili Soni
Savings Account Interest Rate
12/5/17

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    double deposit;
    
    cout <<"How much money are you depositing?";
    cin >> deposit;
    
    if(deposit >= 0 && deposit <= 10000)
    {
      cout << "You will earn 0.5% interest";
    }
    
    else if(deposit >= 10001 && deposit <20000)
    {
      cout << "You will earn 1% interest";
    }
    
    else if(deposit >= 20000)
    {
      cout << "You will earn 1.5% interest";
    }
  
    
    return 0;
}

