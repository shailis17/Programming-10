/******************************************************************************

Shaili Soni
Holiday Menu
11/22/17

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
  //declare variables
  int meatChoice, stuffingChoice, gravyChoice, potatoChoice, vegetableChoice, dessertChoice, numFoods = 0;
  
  //get input for meat
  cout << "Choose a meat:\n1. Turkey Breast\n2. Turkey Leg \n3. Meatloaf\n4. None\n";
  cin >> meatChoice;
  if(meatChoice == 1 || meatChoice == 2 || meatChoice == 3)
  {
    numFoods ++;
    //get input for gravy
  cout << "Would you like gravy? (1) Yes or (2) No. \n";
  cin >> gravyChoice;
  }
  
  //get input for stuffing
  cout << "Would like stuffing? (1) Yes or (2) No. \n";
  cin >> stuffingChoice;
  if(stuffingChoice == 1)
  {
    numFoods++;
  }
  
  //get input for potatoes
  cout << "Choose a potato:\n1. Mashed Potatoes\n2. Sweet Potatoes\n3. Turnips \n4. None\n";
  cin >> potatoChoice;
  
  if(potatoChoice == 1 || potatoChoice == 2 || potatoChoice == 3)
  {
    numFoods++;
  }
  //get input for vegetable
  cout << "Choose a vegetable: \n1. Green Beans\n2. Corn\n3. Stewed Squash\n4. Salad\n5. None \n";
  cin >> vegetableChoice;
  if(vegetableChoice == 1 || vegetableChoice == 2 || vegetableChoice == 3 || vegetableChoice == 4)
  {
    numFoods++;
  }
  
  //get input for dessert
  cout << "Choose a dessert:\n1. Pumpkin Pie\n2. Apple Pie\n3. Minced Meat Pie\n4. Lemon Merengue Pie\n5. None\n";
  cin >> dessertChoice;
  if(dessertChoice == 1 || dessertChoice == 2 || dessertChoice == 3 || dessertChoice == 4)
  {
    numFoods++;
  }
  
  //print results
  cout << endl;
  if (numFoods == 0)
  {
    cout << "You have to eat something \n I'd try the mashed potatoes... or maybe a slice of apple pie 😊 ";
  }
  if(numFoods == 1)
  {
    cout << "You must not be very hungry, you are only eating:";
  }
  if(numFoods > 1)
  {
    cout << "You must be hungry since your plate is full of: \n";
  }
  
  //print out the foods
  if(meatChoice == 1)
  {
    cout << "Turkey Breast ";
  }
  if(meatChoice == 2)
  {
    cout << "Turkey Leg ";
  }
  if(meatChoice == 3)
  {
    cout << "Meatloaf ";
  }
  if(gravyChoice == 1)
  {
    cout << "and Gravy\n";
  }
  if(gravyChoice == 2)
  {
    cout << endl;
  }
  if(stuffingChoice == 1)
  {
    cout << "Stuffing\n";
  }
  if(potatoChoice == 1)
  {
    cout << "Mashed Potatoes\n";
  }
  if(potatoChoice == 2)
  {
    cout << "Sweet Potatoes\n";
  }
  if(potatoChoice == 3)
  {
    cout << "Turnips\n";
  }
  if(vegetableChoice == 1)
  {
    cout << "Green Beans\n";
  }
  if(vegetableChoice == 2)
  {
    cout << "Corn\n";
  }
  if(vegetableChoice == 3)
  {
    cout << "Stewed Squash\n";
  }
  if(vegetableChoice == 4)
  {
    cout << "Salad\n";
  }
  if(dessertChoice == 1)
  {
    cout << "Pumpkin Pie\n";
  }
  if(dessertChoice == 2)
  {
    cout << "Apple Pie\n";
  }
  if(dessertChoice == 3)
  {
    cout << "Minced Meat Pie\n";
  }
  if(dessertChoice == 4)
  {
    cout << "Lemon Merengue Pie\n";
  }
  if(dessertChoice == 5)
  {
    cout << endl;
    cout << "Leave some room for dessert! 😆 ";
  }
  return 0;
}