/******************************************************************************

Shaili Soni
Letter Grade
11/16/17

*******************************************************************************/


#include <iostream>
using namespace std;


int main ()
{
  
  int grade;
  
  cout << "Input grade (round to nearest whole number): ";
  cin >> grade;
  
 
  if(grade >= 65)
  {
    
    if(grade >= 70)
    {
      
      if(grade >= 73)
      {
        
        if(grade >= 77)
        {
          
          if(grade >= 80)
          {
            
            if(grade >= 83)
            {
             
              if(grade >= 87)
              {
                if(grade >= 90)
                {
                  if(grade >= 93)
                  {
                    if(grade >= 97)
                    {
                      cout << "Grade is A+"<<endl;
                      return 0;
                    }
                    
                    cout << "Grade is A";
                    return 0;
                  }
                  
                  cout << "Grade is A-";
                  return 0;
                }
                
                cout<< "Grade is B+";
                return 0;
              }
              
              cout << "Grade is B";
              return 0;
            } 
            
            cout << "Grade is B-";
            return 0;
          } 
          
          cout << "Grade is C+";
          return 0;
        } 
        
        cout << "Grade is C";
        return 0;
      }
      
      cout << "Grade is C-";
      return 0;
    } 
    
    cout << "Grade is D";
    return 0;
  } 
  
  if(grade <= 64)
  {
   cout << "Grade is F";
   return 0;
  }  
  
}