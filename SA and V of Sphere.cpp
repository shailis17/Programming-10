/******************************************************************************

Name
Surface Area and Volume of a Sphere
Date

*******************************************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
  //declare variables
double radius;
double pi;
double volume; 
double sArea;

//define pi
pi= 3.14159265;

//user inputs
cout <<"What is the radius? ";
cin >> radius;

//Calculate Surface Area
sArea= 4 * pi * pow(radius, 2);

//Calculate volume
volume= pi * pow(radius, 3) * 4/3;

//Print Results
cout <<"The surface area of the sphere: " << sArea << endl;
cout <<"The volume of the sphere is: " << volume;

  return 0;
}
