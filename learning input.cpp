#include <iostream>

using namespace std;

int main()
{
   int num1;
   int num2;
   int sum;
   
   //get inputs
   cout << "What is the first number" ;
   cin >> num1;
   
   cout << "What is the second number";
   cin >> num2;
   
   //compute sum
   sum= num1 + num2;
   
   //print results
   cout << "The sum of " << num1 << " and " << num2 << " is " << sum;
   
    
    return 0;
}

