/******************************************************************************

Shaili Soni
Roman Numerals V2 - adding for loops
1/3/18

*******************************************************************************/

#include <iostream>

using namespace std;

int main()

{
    int number, ones, hundreds, tens, thousands;
    cout << "Input an integer less than 10,000:"<<endl;
    cin >> number;
    
   if(number < 10000)
    {
      ones = number%10;
      hundreds = (number/100)%10;
      tens = (number/10)%10;
      thousands = (number/1000)%10;
      
      for(int i = 0; i < thousands; i++)
      {
        
        cout << "M";
      }
      
      switch(hundreds)
      {
        case 1:
        cout << "C";
        break;
        
        case 2:
        cout << "CC";
        break;
        
        case 3:
        cout << "CCC";
        break;
        
        case 4:
        cout << "CD";
        break;
        
        case 5:
        cout << "D";
        break;
        
        case 6:
        cout << "DC";
        break;
        
        case 7:
        cout << "DCC";
        break;
        
        case 8:
        cout << "DCCC";
        break;
        
        case 9:
        cout << "CM";
        break;
      }
      
      switch(tens)
      {
        case 1:
        cout << "X";
        break;
        
        case 2:
        cout << "XX";
        break;
        
        case 3:
        cout << "XXX";
        break;
        
        case 4:
        cout << "XL";
        break;
        
        case 5:
        cout << "L";
        break;
        
        case 6:
        cout << "LX";
        break;
        
        case 7:
        cout << "LXX";
        break;
        
        case 8:
        cout << "LXXX";
        break;
        
        case 9:
        cout << "XC";
        break;
      }
      
      switch(ones)
      {
        case 1:
        cout << "I";
        break;
        
        case 2:
        cout << "II";
        break;
        
        case 3:
        cout << "III";
        break;
        
        case 4:
        cout << "IV";
        break;
        
        case 5:
        cout << "V";
        break;
        
        case 6:
        cout << "VI";
        break;
        
        case 7:
        cout << "VII";
        break;
        
        case 8:
        cout << "VIII";
        break;
        
        case 9:
        cout << "IX";
        break;
      }
    }
    else
    {
      
      cout << "Error. Please enter a number less than 1000"<<endl;
    }
    return 0;
}
