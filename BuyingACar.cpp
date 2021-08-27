/******************************************************************************

Shaili Soni
Buying a Car 
3/20/18

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    double principal, APR, monthly, interest;
    int months;
    
    cout << "Enter principal amount";
    cin >> principal;
    
    cout << "Annual Percentage Rate";
    cin >> APR;
    
    cout << "Monthly Payment";
    cin >> monthly;
    
    interest = APR/1200;
    
    do
    { 
      principal = (interest +  1) * principal - monthly;
      months++; 
    }while(principal > monthly);
    
    months ++;
    
    cout << "Number of months to pay off loan: "<< months <<endl;
    return 0;
}
