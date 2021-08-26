/******************************************************************************

Shaili Soni
Today's Date
11/30/17

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int month, day, year;
    
    cout << "Enter the month as a number: ";
    cin >> month;
    
    
    cout << "Enter day:";
    cin >> day;
    
    cout << "Enter year:";
    cin >> year;
    
    if(month == 1)
    cout << "January ";
    
    if(month == 2)
    cout << "February ";
    
    if(month == 3)
    cout << "March ";
    
    if(month == 4)
    cout << "April ";
    
    if(month == 5)
    cout << "May ";
    
    if(month == 6)
    cout << "June ";
    
    if(month == 7)
    cout << "July ";
    
    if(month == 8)
    cout << "August ";
    
    if(month == 9)
    cout << "September ";
    
    if(month == 10)
    cout << "October ";
    
    if(month == 11)
    cout << "November ";
    
    if(month == 12)
    cout << "December ";
    
    cout << day << ", " << year;
    
    return 0;
}
