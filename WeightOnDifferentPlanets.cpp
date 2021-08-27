/******************************************************************************

Shaili Soni
Weight on the Different Planets
12/21/17

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    double weight, adjustedWeight;
    int planetChoice;
    
    cout << "Which planet do you wish to visit?" << endl;
    cout << " 1. Mercury \n 2. Venus \n 3. Stay on Earth... Not a fan of space travel \n 4. Mars \n 5. Jupiter \n 6. Saturn \n 7. Uranus \n 8. Neptune \n 9. Pluto... because it is totally still a planet";
    cin >> planetChoice;
    
    cout << "How much do you weigh? ";
    cin >> weight;
    
    switch(planetChoice)
    {
      case 1:
      adjustedWeight = weight * 0.38;
      cout << "You will weigh " << adjustedWeight << " lbs on Mercury";
      break;
      
      case 2:
      adjustedWeight = weight * 0.91;
      cout << "You will weigh " << adjustedWeight << " lbs on Venus";
      break;
      
      case 3:
      adjustedWeight = weight * 1;
      cout << "You will weigh " << adjustedWeight << " lbs on Earth. That's the same as you weighed before :P";
      break;
      
      case 4:
      adjustedWeight = weight * 0.38;
      cout << "You will weigh " << adjustedWeight << " lbs on Mars";
      break;
      
      case 5:
      adjustedWeight = weight * 2.34;
      cout << "You will weigh " << adjustedWeight << " lbs on Jupiter";
      break;
      
      case 6:
      adjustedWeight = weight * 1.06;
      cout << "You will weigh " << adjustedWeight << " lbs on Saturn";
      break;
      
      case 7:
      adjustedWeight = weight * 0.92;
      cout << "You will weigh " << adjustedWeight << " lbs on Uranus";
      break;
      
      case 8:
      adjustedWeight = weight * 1.19;
      cout << "You will weigh " << adjustedWeight << " lbs on Neptune";
      break;
      
      case 9:
      adjustedWeight = weight * 0.06;
      cout << "You will weigh " << adjustedWeight << " lbs on Pluto";
      break;
    }
    
    
    return 0;
}
