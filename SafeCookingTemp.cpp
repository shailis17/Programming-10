/******************************************************************************

Shaili Soni
Safe Cooking Temperature
12/19/17

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int food, temp;
    
    cout << "What are you cooking?" << endl;
    cout << " 1. Beef \n 2. Chicken \n 3. Pork \n 4. Lamb \n 5. Fish \n 6. Something else";
    cin >> food;
    
    switch(food)
    {
    case 1:
    temp = 160;
    break;
    
    case 2:
    temp = 165;
    break;
    
    case 3:
    temp = 170;
    break;
    
    case 4:
    temp = 160;
    break;
    
    case 5:
    temp = 145;
    break;
    
    case 6:
    temp = 140;
    break;
    }
    
    cout << "Recommended temperature: " << temp;
    return 0;
}
