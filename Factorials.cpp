/******************************************************************************

Shaili Soni
Factorial
1/11/18

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int userNum, factorial;
    
    cout << "Enter a positive integer";
    cin >> userNum;
    
    cout << userNum << "! is: ";
    factorial = userNum;
    
    for(int x= 1; x< userNum; x++)
    {
      factorial *=x;
    }
    
    cout << factorial;
    return 0;
}
