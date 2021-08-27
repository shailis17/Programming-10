/******************************************************************************

Shaili Soni
Fibonacci Sequence
2/8/18

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    
    cout << "Which term of the Fibonacci Sequence do you want?";
    cin >> n;
    
    //Fibonacci Sequence: x<sub>n = x<sub>n-1 + x<sub>n-2 
    //t1= n-1 
    //t2 = n-2
    
    int t1 = 0, t2 = 0, nextTerm = 1;
    
    for(int i=1; i <= n; i++)
    {
        t1 = nextTerm;
        nextTerm = nextTerm + t2;
        t2 = t1;
        
        
        if(i == n-1)
        {
          cout << "The term you want is: " << nextTerm;
        }
    }
    
    return 0;
}

