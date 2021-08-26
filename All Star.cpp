/******************************************************************************

Shaili Soni
All Star
10.18.17

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
  //declare all variables
  int userPoints, userAssists, userRebounds, onlyPoints, points, assists, rebounds;
  bool allStar1, allStar2;
  
  //initialize variables
  onlyPoints= 25;
  points= 10;
  assists= 10;
  rebounds= 10;
  
  //get inputs
  cout <<"How many points did you earn per game? " << endl;
  cin >> userPoints;
  cout << "How many assists did you make per game? " << endl;
  cin >> userAssists;
  cout << "How many rebounds did you make per game? " << endl;
  cin >> userRebounds;
  
  //perform evaluation
  allStar1= (userPoints >= onlyPoints);
  allStar2= (userPoints >= points && userAssists >= assists && userRebounds >= rebounds);
  
  //print results
  cout << "You are an All Star: " << boolalpha << (allStar1 || allStar2);
  
  
    
    return 0;
}

