/******************************************************************************

Shaili Soni
Math Library V4
5/20/18

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int GCF(int num1, int num2);
int LCM(int num1, int num2);
void Fraction(int num, int denominator);
void power(double base, double exponent);
void squarert(double num);
void factorial (double num);
void sum(double num);
void factorization(int number);

int num1, num2, counter, choice;

int main()
{
    int choice, z;
    double x, y;
    while(choice != 6)
    {
      cout << endl; 
      cout << "Choose from the following options:"<<endl;
      cout << "1. Raise to a power.\n"<< "2. Take square root\n"<<"3. Factorial\n"<<"4. Sum to a number\n"<< "5. Prime Factorization\n"<<"6. Find GCF\n"<< "7. Find LCM\n"<<"8. Reduce Fraction\n"<<"9.Quit Program\n"<<endl;
      
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
        break;

        case 6:
        int value_GCF;
    
        cout <<"Please input two integers."<< endl;
        cin >> num1 >> num2;
        
        value_GCF = GCF(num1, num2);
        
        cout <<"The GCF of "<<num1<<" and "<<num2<<" is "<<value_GCF<<"."<< endl;
        break;

        case 7:
        int value_LCM;
   
        cout << "Insert 2 integers";
        cin >> num1 >> num2;
   
        value_LCM = LCM(num1, num2);
   
        cout << "LCM is "<< value_LCM << "\n";
        break;

        case 8:
        int num, denominator;
        cout << "Enter a number"<<endl;
        cin >> num;

        cout << "Enter a denominator"<<endl;
        cin >> denominator;

        Fraction(num, denominator);
        break;

        case 9:
        return 0;
        
      }
    }
    
}

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

int GCF(int num1, int num2)
{
  int GCF;
  
  for (counter=1; counter<=num1; counter++)
  {
    if (num1%counter==0 && num2%counter==0)
    {
      GCF = counter;
    }
  }
  
  return GCF;
}
    
int LCM(int num1, int num2)
{
  if(num1 > num2)
  {
    for(int i = num1; i <= num1*num2; i++)
    {
      if(i%num1 == 0 && i%num2 == 0)
      {
        return i;
      }
    }
  }
  else if(num2 > num1)
  {
    for(int i = num2; i <= num1*num2; i++)
    {
      if(i%num1 == 0 && i%num2 == 0)
      {
        return i;
      }
    }
  }
  else
  {
    return num1*num2;
  }
}

void Fraction(int num, int denominator)
{
  int gcF;

  gcF = GCF (num, denominator);
  cout << num << "/" << denominator << "=" << num/gcF << "/" << denominator/gcF;
}
