/******************************************************************************

Shaili Soni
Array Average
6/4/2018

*******************************************************************************/

#include <iostream>

using namespace std;

double sum(double average[], int elements)
{
  double addition = 0;
  for(int i=0; i< elements; i++)
  {
    addition+=average[i];
  }
  return addition;
}

int main()
{
  int elements;
  
  double number, aam; 
  cout << "How many numbers are you trying to find the average of (i.e Number of terms)?";
  cout << " " << endl;
  cin >> elements;
  
  double average[elements];
  
  cout << "Enter the numbers you would like to find the average of (Click Enter after each number)" << endl;

  for(int i=0; i<elements; i++)
  {
    cin >> average[i];
    cout << " " << endl;
  } 
  
  number = sum(average, elements);
  aam = number/elements;
  cout << "The average is: " << aam << endl; 
  
  return 0;
}
