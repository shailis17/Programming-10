#include <iostream>

using namespace std;

int main()
{
    bool a,b;
    
    a= true;
    b= false;
    
    cout << boolalpha;
    cout << "True AND False: " << (a && b)<< endl;
    cout << "True OR False: " << (a || b) <<endl;
    cout << "NOT (True AND False): " << (!a && b)<< endl;
    cout << "NOT (True OR False): " << (! a || b);
    
    
    
    return 0;
}

