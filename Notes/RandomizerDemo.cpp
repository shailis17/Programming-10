#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    
    srand(time(0));
    cout << rand()%100+1;
    
    return 0;
}
