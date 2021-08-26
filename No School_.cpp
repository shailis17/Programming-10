/******************************************************************************

Shaili Soni
No School?
10/13/17

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    //declare variables
    bool weekend, holiday;
    
    //initalize variables
    weekend = false;
    holiday = false;
    
    //print results
    cout << boolalpha;
    cout << "School Today: " << (!weekend && !holiday) << endl;
    
    return 0;
}

