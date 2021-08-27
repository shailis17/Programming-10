/******************************************************************************

Shaili Soni
Alarm Clock
3/1/18

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    bool alarmOn = true;
    int hours, minutes, choice;
    string time;
    
    cout << "What time do you want to set your alarm for?" << endl;
    cout << "Hour: ";
    cin >> hours;
    cout << "Minutes";
    cin >> minutes;
    cout << "Am or Pm";
    cin >> time;
    
    while(alarmOn)
    {
      if(minutes < 10)
      {
        
        cout << "Current time is: "<<hours<<" : "<< "0"<< minutes<<time<<endl;
      }
      else
      {
        
        cout << "Current time is: "<<hours<<" : "<< minutes<<time<<endl;
      }
      
      cout << "Do you want to (1) Snooze or (2) Turn Off";
      cin >> choice;
      
      switch(choice)
      {
        case 1:
        minutes +=5;
        if(minutes >= 60)
          {
            hours++;
            minutes = minutes - 60;
          }
        if(hours > 12)
        {
          hours = hours - 13 +1;
         
          if(time == "PM")
            {
              time = "AM";
            }
          else
            {
              time = "PM";
            }
        }
        break;
        
        case 2:
        alarmOn = false;
        break;
        
        default:
        cout << "Error: Please try again...";
        }
      }
      
      cout << "Your alarm has been turned off. Now WAKE UP";
      return 0;
}
