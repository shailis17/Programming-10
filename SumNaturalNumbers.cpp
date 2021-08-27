/******************************************************************************

Shaili Soni
Sum of the first n natural numbers
1/12/18

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int num, sum;
    
    cout << "Insert a positive integer:"<<endl;
    cin >> num;
    
    sum = 0;
    for(int x = 1; x <= num; x++)
    {
      sum += x;
    }
    
    cout << "The sum of all natural numbers prior to your chosen number is equal to: " << sum;

    
    return 0;
}
