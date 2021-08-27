/******************************************************************************

Shaili Soni
Best Average
3/14/18

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
  
    double num, average, sum;
    int count;
    
    cout << "Enter numbers. Enter negative number to stop the program"<<endl;
    
    do
    {
      
      cin >> num;
      if(num > 0)
      {
       
        count++;
        sum+= num;
        average = sum/count;
        
      }
      
    }while(num >= 0);
    
    cout << "Average: "<<average<<endl;
    return 0;
}
