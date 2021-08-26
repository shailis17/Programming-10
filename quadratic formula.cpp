/******************************************************************************

Shaili Soni
Quadratic Formula
10/31/17

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,c,x1,x2;
    
    cout << "Enter the coefficient of x²: " << endl;
    cin >> a;
    cout << "Enter the coefficient of x: " << endl;
    cin >> b;
    cout << "Enter the constant: " << endl;
    cin >> c;
    
    x1= (-b + sqrt(b*b - 4*a*c))/2*a;
    x2= (-b - sqrt(b*b - 4*a*c))/2*a;
    
    cout << "X is equal to " << x1 << " or " << x2;
    
    
    
    return 0;
}

