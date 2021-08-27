/******************************************************************************

Shaili Soni
4 Function Calculator
12/20/17

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    double num1, num2;
    char operation;
    
    cout << "Input 2 numbers: ";
    cin >> num1 >> num2;
    
    cout << "Operation: ";
    cin >> operation;
    
    switch (operation)
    {
      case '+':
      cout << num1 + num2;
      break;
      
      case '-':
      cout << num1 - num2;
      break;
      
      case '*':
      cout << num1 * num2;
      break;
      
      case '/':
        if(operation = '/' && num2 == 0)
      {
        cout << "Syntax Error: cannot divide by zero";
      }
      else
      {
        cout << num1/num2;
      }
      break;
      
      default:
      cout << "Syntax Error: incorrect operator";
      break;
    }
    
    return 0;
}
