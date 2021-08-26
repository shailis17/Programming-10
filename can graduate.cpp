/******************************************************************************

Shaili Soni
Can Graduate
10/16/17

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    bool gradReq, credits;
    
    cout << "Enter 1 for true and 0 for false:" << endl;
    cout << "You met all the graduation requirements- " <<endl;
    cin >> gradReq;
    cout << "You earned enough credits to graduate- " << endl;
    cin >> credits;
    
    cout << "Student is eligable to graduate: " << boolalpha << (gradReq && credits);
    
    
    return 0;
}

