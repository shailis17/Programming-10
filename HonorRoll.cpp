/******************************************************************************

Shaili Soni
Honor Roll
12/11/17

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    string math, english, science, history, worldLang, elective, gym;
    double gpa = 0; 
    
    //get inputs
    cout << "Please input letter grade:" << endl;
    cout << "Enter grade for math: ";
    cin >> math;
    cout << "Enter grade for english: ";
    cin >> english;
    cout << "Enter grade for science: ";
    cin >> science;
    cout << "Enter grade for history: ";
    cin >> history;
    cout << "Enter grade for world language";
    cin >> worldLang;
    cout << "Enter grade for elective: ";
    cin >> elective;
    cout << "Enter grade for gym: ";
    cin >> gym;
    
    //determine honor status
    if (math == "A+"|| math == "A" || math == "A-" || math == "B+" || math == "B" || math == "B-")
   {
     if(english == "A+" || english == "A" || english == "A-" || english == "B+" || english == "B" || english == "B-")
     {
       if(science == "A+" || science == "A" || science == "A-" || science == "B+" || science == "B" || science == "B-")
       {
         if(history == "A+" || history == "A" || history == "A-" || history == "B+" || history == "B" || history == "B-")
         {
            if(worldLang == "A+" || worldLang == "A" || worldLang == "A-" || worldLang == "B+" || worldLang == "B" || worldLang == "B-")
            {
              if(elective == "A+" || elective == "A" || elective == "A-" || elective == "B+" || elective == "B" || elective == "B-")
              {
                if(gym == "A+" || gym == "A" || gym == "A-" || gym == "B+" || gym == "B" || gym == "B-")
                {
                  cout << "You made the Honor Roll 😊 \n";
                }
              }
            }
         }
       }
     }
   }
    else
    {
      cout <<"You did not make the Honor Roll 😞 \n";
    }
    
    //GPA Calculations
    if(math == "A+")
    {
      gpa += 4.33;
    }
    else if(math == "A")
    {
      gpa += 4;
    }
    else if(math == "A-")
    {
      gpa += 3.67;
    }
    else if(math == "B+")
    {
      gpa += 3.33;
    }
    else if(math == "B")
    {
      gpa += 3;
    }
    else if(math == "B-")
    {
      gpa += 2.67;
    }
    else if(math == "C+")
    {
      gpa += 2.33;
    }
    else if(math == "C")
    {
      gpa += 2;
    }
    else if(math == "C-")
    {
      gpa += 1.67;
    }
    else if(math == "D")
    {
      gpa += 1;
    }
    else if(math == "F")
    {
      gpa += 0;
    }
    
    if(english == "A+")
    {
      gpa += 4.33;
    }
    else if(english == "A")
    {
      gpa += 4;
    }
    else if(english == "A-")
    {
      gpa += 3.67;
    }
    else if(english == "B+")
    {
      gpa += 3.33;
    }
    else if(english == "B")
    {
      gpa += 3;
    }
    else if(english == "B-")
    {
      gpa += 2.67;
    }
    else if(english == "C+")
    {
      gpa += 2.33;
    }
    else if(english == "C")
    {
      gpa += 2;
    }
    else if(english == "C-")
    {
      gpa += 1.67;
    }
    else if(english == "D")
    {
      gpa += 1;
    }
    else if(english == "F")
    {
      gpa += 0;
    }
    
    if(science == "A+")
    {
      gpa += 4.33;
    }
    else if(science == "A")
    {
      gpa += 4;
    }
    else if(science == "A-")
    {
      gpa += 3.67;
    }
    else if(science == "B+")
    {
      gpa += 3.33;
    }
    else if(science == "B")
    {
      gpa += 3;
    }
    else if(science == "B-")
    {
      gpa += 2.67;
    }
    else if(science == "C+")
    {
      gpa += 2.33;
    }
    else if(science == "C")
    {
      gpa += 2;
    }
    else if(science == "C-")
    {
      gpa += 1.67;
    }
    else if(science == "D")
    {
      gpa += 1;
    }
    else if(science == "F")
    {
      gpa += 0;
    }
    
    if(history== "A+")
    {
      gpa += 4.33;
    }
    else if(history == "A")
    {
      gpa += 4;
    }
    else if(history == "A-")
    {
      gpa += 3.67;
    }
    else if(history == "B+")
    {
      gpa += 3.33;
    }
    else if(history == "B")
    {
      gpa += 3;
    }
    else if(history == "B-")
    {
      gpa += 2.67;
    }
    else if(history == "C+")
    {
      gpa += 2.33;
    }
    else if(history == "C")
    {
      gpa += 2;
    }
    else if(history == "C-")
    {
      gpa += 1.67;
    }
    else if(history == "D")
    {
      gpa += 1;
    }
    else if(history == "F")
    {
      gpa += 0;
    }
    
    if(worldLang == "A+")
    {
      gpa += 4.33;
    }
    else if(worldLang == "A")
    {
      gpa += 4;
    }
    else if(worldLang == "A-")
    {
      gpa += 3.67;
    }
    else if(worldLang == "B+")
    {
      gpa += 3.33;
    }
    else if(worldLang == "B")
    {
      gpa += 3;
    }
    else if(worldLang == "B-")
    {
      gpa += 2.67;
    }
    else if(worldLang == "C+")
    {
      gpa += 2.33;
    }
    else if(worldLang == "C")
    {
      gpa += 2;
    }
    else if(worldLang == "C-")
    {
      gpa += 1.67;
    }
    else if(worldLang == "D")
    {
      gpa += 1;
    }
    else if(worldLang == "F")
    {
      gpa += 0;
    }
    
    if(elective == "A+")
    {
      gpa += 4.33;
    }
    else if(elective == "A")
    {
      gpa += 4;
    }
    else if(elective == "A-")
    {
      gpa += 3.67;
    }
    else if(elective == "B+")
    {
      gpa += 3.33;
    }
    else if(elective == "B")
    {
      gpa += 3;
    }
    else if(elective == "B-")
    {
      gpa += 2.67;
    }
    else if(elective == "C+")
    {
      gpa += 2.33;
    }
    else if(elective == "C")
    {
      gpa += 2;
    }
    else if(elective == "C-")
    {
      gpa += 1.67;
    }
    else if(elective == "D")
    {
      gpa += 1;
    }
    else if(elective == "F")
    {
      gpa += 0;
    }
    
    if(gym == "A+")
    {
      gpa += 4.33;
    }
    else if(gym == "A")
    {
      gpa += 4;
    }
    else if(gym == "A-")
    {
      gpa += 3.67;
    }
    else if(gym == "B+")
    {
      gpa += 3.33;
    }
    else if(gym == "B")
    {
      gpa += 3;
    }
    else if(gym == "B-")
    {
      gpa += 2.67;
    }
    else if(gym == "C+")
    {
      gpa += 2.33;
    }
    else if(gym == "C")
    {
      gpa += 2;
    }
    else if(gym == "C-")
    {
      gpa += 1.67;
    }
    else if(gym == "D")
    {
      gpa += 1;
    }
    else if(gym == "F")
    {
      gpa += 0;
    }
    
    gpa /= 7;
    cout << "Your GPA is: " << gpa << endl;
    
    if(gpa >= 3.6)
    {
      cout << "Your GPA is high enough to make the Dean's List";
    }
    if(gpa < 3.6)
    {
      cout << "Sorry. Your GPA is not high enough to make the Dean's List";
    }
    return 0;
}

