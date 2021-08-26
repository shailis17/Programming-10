/******************************************************************************

Shaili Soni
Convert to Vertex Form from Standard Form
11.1.17

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  //declare variables
  double a, b, c, sq, c2;
  
  //get inputs
  cout << "Enter the coefficient of x²: ";
  cin >> a;
  
  cout << "Enter the coefficient of x: ";
  cin >> b;
  
  cout << "Enter the constant term: ";
  cin >> c;
  
  cout << "Original Equation: " << endl;
  cout << "y = " << a << "x² + " << b << "x + " << c << endl;
  
  //complete the square
  sq= pow(b/2,2);
  c2= c- sq;
  
  //print results
  cout << "y = (x + " << b/2 << ")² + " << c2;
  
  

return 0;
}


