#include <iostream>
using namespace std;

int main()
{
  //declare variables
  int grade, onesPlace;
  char letterGrade, plusMinus;

  //get input for the grade
  cout << "What was your numerical grade (0-100)? ";
  cin >> grade;

  if(grade >= 0 && grade <= 100)
    {
      onesPlace = grade % 10;
      grade /= 10;
      switch (grade)
      {
        case 6:
        letterGrade = 'D';
        break;

        case 7:
        letterGrade = 'C';
        break;

        case 8:
        letterGrade = 'B';
        break;

        case 9:
        case 10:
        letterGrade = 'A';
        break;

        default:
        letterGrade = 'F';

      }
      cout << "Your grade is " << letterGrade;

      if(grade >=6 && grade <=9)
      {
        switch(onesPlace)
        {
          case 0:
          case 1:
          case 2:
          plusMinus = '-';
          break;

          case 7:
          case 8:
          case 9:
          plusMinus = '+';
          break;

          default:
          plusMinus = ' ';
          break;
        }
      }
      else if (grade == 10)
      {
        plusMinus = '+';
      }
      cout << plusMinus;

    }
    else
    {
      cout << "You have entered an invalid grade.";
    }

  return 0;
}
