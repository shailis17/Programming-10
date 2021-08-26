#include <iostream>

using namespace std;

int main()
{
    //declare variables
    int userNum, computerNum;
    
    //initalize variables
    computerNum= 50;
    
    //get inputs
    cout << "Enter a number: ";
    cin >> userNum;
    
    //compare numbers and print results
    
    if (userNum > computerNum)
    {
      cout << "That number is too high";
    }
    
    if (userNum < computerNum)
    {
      cout << "That number is too low";
    }
    
    if (userNum == computerNum)
    {
      cout << "You guessed the number!!!";
    }
    
    return 0;
}

