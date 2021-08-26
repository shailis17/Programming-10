/***************************************
 Shaili Soni
 Surface Area and Volume of a Cube
 10.6.17
***************************************/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  //declare variables
  double side, sArea, volume;

  //get inputs
  cout << "What is the length of the side? ";
  cin >> side;
  
  //calculate Surface Area
  sArea= pow(side, 2) * 6;
  
  //calculate volume
  volume= pow(side, 3);

  //print results
  cout <<"The surface area of the cube is: " << sArea << endl;
  cout <<"The volume of the cube is: " << volume;
  
  
   
  return 0;
}
