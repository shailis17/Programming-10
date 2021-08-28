/******************************************************************************

Shaili Soni
Hangman
6/7/18

*******************************************************************************/

#include <iostream>
#include <cstdlib>
using namespace std;

void printArr(char arr[], int size);
string randWord();

int main() 
{
  bool gameOn;
  int newGame;
  
  do
  {
    //variables
    string answer = randWord();
    int size = answer.length();
    char word[size];
    char blank[size];
    char guess;
    int remainingGuesses = 10;
    int numLetters = size;
    bool unanswered = true, win = false;
    
    for(int i = 0; i < size; i++)
    {
      word[i] = answer.at(i);
      if(answer.at(i) == ' ')
      {
        blank[i] = ' ';
        numLetters--;
      }
      else
        blank[i] = '_';
    }
    
    do{
      bool inString = false;
      printArr(blank, size);
      cout << remainingGuesses << " wrong guesses remain. ";
      cout << "Enter a letter: ";
      cin >> guess;
      
      for(int i = 0; i < size; i++)
      {
        if(word[i] == guess)
        {
          blank[i] = guess;
          numLetters--;
          inString = true;
        }
      }
      
      if(!inString)
      {
        remainingGuesses--;
      }
      if(remainingGuesses == 0)
      {
        break;
        win = false;
      }
      if(numLetters == 0)
      {
        win = true;
        unanswered = false;
      }
    }while(unanswered);
    
    printArr(word, size);
    
    if(win)
    {
      cout << "You correctly guessed the word." << endl;
    }
    else
    {
      cout << "Sorry you have failed." << endl;
    }
   
  }while(gameOn);
    
    //replay?
    cout << "Play again? \n1.Yes \n2.No \n";
    cin >> newGame;
    if(newGame == 1)
    {
      gameOn = true;
    }
    else
    {
      gameOn = false;
    }
}

//functions
void printArr(char arr[], int size)
{
  for(int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

string randWord()
{
  srand(time(NULL));
  int category;
  cout << "Choose a Category:\n1. U.S. Cities\n2. Technology\n3. Continents\n4. Bodies of Water\n5. Animals\n6. School Subjects\n7. Food\n8. U.S. States\n9. Random\n";
  cin >> category;
  if(category == 9)
  {
    category = rand()%8+1;
  }
  
  string cities[14] = {"new york city", "dallas", "philadelphia", "san antonio", "miami", "boston", "los angeles", "chicago", "detroit", "cleveland", "salt lake city", "trenton", "newark", "baltimore"};
  string technology[7] = {"processor", "computer", "smart phone", "laptop", "tablet", "hotspot", "wireless"};
  string continents[7] = {"north america", "south america", "europe", "asia", "africa", "australia", "antarctica"};
  string bodiesWater[19] = {"atlantic ocean", "pacific ocean", "indian ocean", "arctic ocean", "carribean sea", "mediterranean sea", "gulf of mexico", "black sea", "caspian sea", "nile river", "mississippi river", "amazon river", "lake erie", "lake superior", "lake huron", "lake michigan", "lake ontario", "colorado river", "lake mead"};
  string animals[10] = {"eagle", "tiger", "lion", "bear", "hawk", "horse", "snake", "elephant", "giraffe", "turkey"};
  string subjects[20] = {"english", "literature", "science", "history", "economics", "chemistry", "biology", "physics", "algebra", "geometry", "calculus", "statistics", "mythology", "computer science", "physical education", "drivers education", "health", "music", "fashion", "programming"};
  string food[9] = {"apple", "strawberry", "pizza", "hamburger", "hot dog", "fried chicken", "mashed potatoes", "steak", "burrito"};
  cout << "The category is: ";
  string states[50] = {"alabama", "alaska", "arizona", "arkansas", "california", "colorado", "connecticut", "delaware", "florida", "georgia", "hawaii", "idaho", "illinois", "indiana", "iowa", "kansas", "kentucky", "louisiana", "maine", "maryland", "massachusetts", "michigan", "minnesota", "mississippi", "missouri", "montana", "nebraska", "nevada", "new hampshire", "new jersey", "new mexico", "new york", "north carolina", "north dakota", "ohio", "oklahoma", "oregon", "pennsylvania", "rhode island", "south carolina", "south dakota", "tennessee", "texas", "utah", "vermont", "virginia", "washington", "west virginia", "wisconsin", "wyoming"};
  
  switch(category)
  {
    case 1:
      cout << "city\n";
      return cities[rand()%14];
      break;
    case 2:
      cout << "technology\n";
      return technology[rand()%7];
      break;
    case 3:
      cout << "continent\n";
      return continents[rand()%7];
      break;
    case 4:
      cout << "bodies of water\n";
      return bodiesWater[rand()%19];
      break;
    case 5:
      cout << "animals\n";
      return animals[rand()%10];
      break;
    case 6:
      cout << "school subjects\n";
      return subjects[rand()%20];
      break;
    case 7:
      cout << "food\n";
      return food[rand()%7];
      break;
    case 8:
      cout << "U.S. State\n";
      return states[rand()%50];
      break;
  }
}
