/******************************************************************************

Shaili Soni
Prime Factorization
2/26/18

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int num, factor = 2;
    
    cout << "Enter an integer:";
    cin >> num;
    
    cout << "The prime factorization of the number " << num << " is 1";
    
    while (factor <= num)
    {
    if(num % factor == 0)
    {
     cout << " * " << factor; 
     num/=factor;
    }  
    else
      factor++;
    }
    
    return 0;
}

