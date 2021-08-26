#include <iostream>

using namespace std;

int main()
{
//declare variables
string firstName, lastName;
char middleInitial;

//get inputs
cout << "Enter your first name";
cin >> firstName;
cout << "Enter your last name";
cin >> lastName;
cout << "Enter your middle middle initial if applicable";
cin >> middleInitial;

//print results- last middle first 
cout << lastName << ", " << firstName << " " << middleInitial << "." << endl;

//print results- first middle last
cout << firstName << " " << middleInitial << ". " << lastName;

    return 0;
}

