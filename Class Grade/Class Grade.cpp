/******************************************************************************

Shaili Soni
007. Class Grade
Date

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    //Declare variables
    string name = "Shaili Soni";
    double testAverage;
    double quizAverage;
    double homeworkAverage;
    double testWeight;
    double quizWeight;
    double homeworkWeight;
    double classGrade;
  
  //initialize averages and percentages
  testAverage= 95;
  testWeight= 0.45;
  quizAverage= 92;
  quizWeight= 0.40;
  homeworkAverage= 100;
  homeworkWeight= 0.15;
  
  //calculate class Grade
  classGrade= testAverage * testWeight + quizAverage * quizWeight + homeworkAverage * homeworkWeight;
  
  //print results
  cout <<"Student Name: " << name << endl;
  cout <<"Test Average: " << testAverage << endl; 
  cout <<"Quiz Average: " << quizAverage << endl;
  cout <<"Homework Average: " << homeworkAverage << endl;
  cout <<"Final Grade: " << classGrade;
    
    return 0;
}

