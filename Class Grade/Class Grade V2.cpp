#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  //declare variables
  string name;
  double testAverage;
  double quizAverage;
  double hwAverage;
  double testWeight = 0.45;
  double quizWeight = 0.4;
  double hwWeight = 0.15;
  double finalGrade;

   //get inputs from the user
  cout << "What is the Test Average?";
  cin >> testAverage;
  cout << "What is the Quiz Average?";
  cin >> quizAverage;
  cout << "What is the Homework Average?";
  cin >> hwAverage;
  
  //calculate final grade
  finalGrade = testAverage * testWeight + quizAverage * quizWeight + hwAverage * hwWeight;
  
  //print results
  cout << "Test Average: " << testAverage << endl;
  cout << "Quiz Average: " << quizAverage << endl;
  cout << "HW Average:   " << hwAverage << endl;
  cout << "Final Grade:  " << finalGrade;
  return 0;
}

