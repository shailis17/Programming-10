/******************************************************************************

Shaili Soni
Triangle Inequality
11/28/17

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    //declare variables
    double a, b, c;
    bool triangle;
    
    //get inputs
    cout << "Enter 3 side lengths";
    cin >> a >> b >> c;
    
    //determine whether triangle
    if (a + b > c)
    {
      
      if (a + c > b)
      {
        
        if (b + c > a)
        {
          triangle = true;
        }
      }
    }
    
    //print results
    cout << "The lengths do ";
    
    if (!triangle)
    cout << "not ";
    
    cout << "make a triangle";
    
    
    return 0;
}

