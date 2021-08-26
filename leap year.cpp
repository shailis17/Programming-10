/******************************************************************************

Shaili Soni
Leap Year
10.20.17

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int year;
    bool leap;
    
    cout << "Enter year: ";
    cin >> year;
    
    leap= (year%4 == 0) && (year%100 != 0) || (year%400 == 0);
    
    cout << year << " is a leap year: " << boolalpha << leap;
    
    
    return 0;
}

