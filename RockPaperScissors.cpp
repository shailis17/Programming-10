/******************************************************************************

Shaili Soni
Rock, Paper, Scissors
5/9/18

*******************************************************************************/

#include <iostream>

using namespace std;

double value();
void toWords(int x);

int main()
{
    double choice, computer_choice;
    cout << "Choose Rock(1), Paper(2), Scissors(3)"<<endl;
    
    cin >> choice;
    
    if(choice != 1 && choice != 2 && choice != 3)
    {
      cout << "Please enter one of the given choices"<<endl;
      
      return 0;
    }
    
    computer_choice = value();
    
    if(computer_choice == choice)
    {
      cout << "Computer chose "; 
      toWords(computer_choice);
      cout << endl;
      cout << "You chose ";
      toWords(choice);
      cout << endl;
      cout << "Tie Game.";
    }
    else if(computer_choice > choice)
    {
      cout << "Computer chose ";
      toWords(computer_choice);
      cout << endl;
      cout << "You chose ";
      toWords(choice);
      cout << endl;
      cout<< "Computer wins... Better luck next time :(";
    }
    else if (computer_choice < choice)
    {
      cout << "Computer chose ";
      toWords(computer_choice); 
      cout << endl;
      cout << "You chose ";
      toWords(choice);
      cout << endl;
      cout << "You win!!!";
    }
    
    return 0;
}

double value()
{
  return rand()%3+1;
}

void toWords(int x)
{
  if(x==1)
  {
    cout << "Rock";
  }
  else if(x==2)
  {
    cout << "Paper";
  }
  else if(x==3)
  {
    cout << "Scissors";
  }
}
