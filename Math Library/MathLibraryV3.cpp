/******************************************************************************

Shaili Soni
Math Library V3
2/20/18

*******************************************************************************/


#include <iostream>
#include <cmath>

using namespace std;

void power(double base, double exponent)
{
  cout << base << " to the power " << exponent<< " = "<<pow(base, exponent)<<endl;
  
}

void squarert(double num)
{
  cout << "Square root of "<<num << " = "<< sqrt(num);
  
}

void factorial(double num)
{
  double product;
  product = 1;
   
  for(int i = 1; i <= num; i++)
  {
        
    product *= i;
  }
      
  cout << num << "! ="<<product;

}

void sum(double num)
{
  double sum;
  
  for(int i = num; i > 0; i--)
  {
          
    sum += i;
  }
        
  cout << "Sum to "<<num<< " = "<<sum<<endl;
}

void factorization(int number)
{
  int i;
  i = 2;
  
  cout << "Prime Factorization of " << number << " is 1 ";
  while(i <= number)
  {
    if(number%i == 0 )
    {
      cout << " * " << i;
      number/=i;
    }
    else
    {
      i++;
    }
  }
  
}
int main()
{
  
    int choice, z;
    double x, y;
    while(choice != 6)
    {
    
    cout << endl; 
    cout << "Choose from the following options:"<<endl;
    cout << "1. Raise to a power.\n"<< "2. Take square root\n"<<"3. Factorial\n"<<"4. Sum to a number\n"<< "5. Prime Factorization\n"<<"6. Quit Program\n"<<endl;
      
      cin >> choice;
       switch(choice)
      {
        case 1:
        cout << "Enter the base"<<endl;
        cin >> x;
        cout << "Enter the exponent"<<endl;
        cin >> y;
        
        power(x, y);
        break;
        
        case 2:
        cout << "Enter number"<<endl;
        cin >> x;
        
        squarert(x);
        break;
        
        case 3:
        cout << "Enter number"<<endl;
        cin >> x;
        
        factorial(x);
        break;
        
        case 4:
        cout << "Enter a number: ";
        cin >> x;
        
        sum(x);
        break;
        
        case 5:
        cout <<"Enter a positive number: "<<endl;
        cin >> z;
        
        factorization(z);
        
      }
    }
    
  return 0;
}
