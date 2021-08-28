/******************************************************************************

Shaili Soni
LCM & GCF
5/10/18

*******************************************************************************/

#include <iostream>

using namespace std;

int GCF(int num1, int num2);
int LCM(int num1, int num2);

int num1, num2, counter, choice;

int main()
{
   cout << "Would you like to find the LCM or GCF" << endl;
   cout << "1)LCM \n2)GCF";
   
   cin >> choice;
   
   if(choice==1)
   {
     int value_LCM;

     cout << "Insert 2 integers";
     cin >> num1 >> num2;

     value_LCM = LCM(num1, num2);

     cout << "LCM is "<< value_LCM;  
   }
  
   if(choice==2)
   {
    int value_GCF;
    
    cout <<"Please input two integers."<< endl;
    cin >> num1 >> num2;
    
    value_GCF = GCF(num1, num2);
    
    cout <<"The GCF of "<<num1<<" and "<<num2<<" is "<<value_GCF<<"."<< endl;
   }
    
   return 0;
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
