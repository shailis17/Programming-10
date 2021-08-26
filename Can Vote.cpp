/******************************************************************************

Shaili Soni
Can Vote 
10/17/17

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    bool age, citizen;
    
    cout <<"Enter 1 for True and 0 for False" <<  endl;
    cout <<"You are at least 18- years old: " << endl;
    cin >> age;
    cout <<"You are a US Citizen: " << endl;
    cin >> citizen;
    cout << boolalpha;
    cout << "You are eligable to vote: " << (age && citizen);
    
    
    
    return 0;
}

