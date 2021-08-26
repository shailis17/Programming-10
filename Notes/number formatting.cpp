#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
 
 double num1 = 123.45;
 double num2= 567.8910;
 double num3= 52345.35564542;
 
 //print without formating
 cout << num1 << endl;
 cout << num2 << endl;
 cout << num3 << endl;
 
 //showpoint
 cout << showpoint << endl;
 cout << num1 << endl;
 cout << num2 << endl;
 cout << num3 << endl;
 
 //fixed
 cout << fixed << endl;
 cout << num1 << endl;
 cout << num2 << endl;
 cout << num3 << endl;
 
 //setprecision
 cout <<setprecision(2) << endl;
 cout << num1 << endl;
 cout << num2 << endl;
 cout << num3 << endl;
 
    
    return 0;
}
