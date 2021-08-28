/******************************************************************************

Shaili Soni
LCM & GCF & Reducing Fractions
5/10/18

*******************************************************************************/

#include <iostream>

using namespace std;

int gcf(int num1, int num2);
int lcm(int num1, int num2);
void reduce_fraction(int num1, int num2);

int num1, num2, counter, choice, value_GCF;

int main()
{
   cout << "Would you like to find the LCM or GCF" << endl;
   cout << "1)LCM\n2)GCF\n3)Reduce Fraction";
   
   cin >> choice;
   
   if(choice==1)
   {
     int value_LCM;

     cout << "Insert 2 integers";
     cin >> num1 >> num2;

     value_LCM = lcm(num1, num2);

     cout << "LCM is "<< value_LCM;
   }
   
   if(choice==2)
   {
      cout <<"Please input two integers."<< endl;
      cin >> num1 >> num2;

      value_GCF = gcf(num1, num2);

      cout <<"The GCF of "<<num1<<" and "<<num2<<" is "<<value_GCF<<"."<< endl;
   }
   
   if(choice ==3)
   {
     cout << "Enter the numerator:";
     cin >> num1;
     cout << "Enter the denominator:";
     cin >> num2;
     
     reduce_fraction(num1, num2);
   }
    return 0;
}

int gcf(int num1, int num2)
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
    
int lcm(int num1, int num2)
{
    return num1 * num2 / gcf(num1, num2);
}
  
void reduce_fraction(int num1, int num2)
{
  int factor = gcf(num1, num2);
     
  cout << num1 / factor << " / " << num2 / factor;
}
