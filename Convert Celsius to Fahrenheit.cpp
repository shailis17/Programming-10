/******************************************************************************

Shaili Soni
Convert Celsius to Fahrenheit
10/3/17

*******************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  //declare variables
  double tempC;
  double tempF;
  
  //ask user for input for temperature.
  cout <<"What is the temperature in Celsius? ";
  cin >> tempC;

  //Perform conversion
  tempF = tempC * 1.8 + 32;

  //print results
  cout << "The temperature in Fahrenheit is " << tempF;

  return 0;
}

