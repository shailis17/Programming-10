/******************************************************************************

Shaili Soni
Monthly Payment Calculator
3/26/18

*******************************************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double principal, APR, n, payment, r;
    
    cout << "Enter principle amount";
    cin >> principal;
    
    cout << "Enter Annual Percentage Rate";
    cin >> APR;
    
    cout << "Enter number of months";
    cin >> n;
    
    r = APR/1200;
    
    payment= (r * principal * pow(1+r, n))/(pow(1 + r, n) - 1);
    
    cout << showpoint << fixed << setprecision(2);
    cout << "Your monthly payment is: $" << payment;
    
    
    return 0;
}
