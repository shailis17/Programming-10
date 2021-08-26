/******************************************************************************

Shaili Soni
008. Pay Stub w/ Input
10/2/17

*******************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  //declare variables
  double week1hours;
  double week2hours;
  double payRate;
  double taxRate = 0.25;
  double week1pay;
  double week2pay;
  double week1tax;
  double week2tax;
  double takeHomePay1;
  double takeHomePay2;
  double totalHours;
  double totalPay;
  double totalTax;
  double totalTakeHome;

  //get input for hours and pay rate.
  cout <<"How many hours did you work during the first week?";
  cin >> week1hours;
  cout <<"How many hours did you work during the second week?";
  cin >> week2hours;
  cout <<"What is the pay rate?";
  cin >> payRate;
  
  
  //calculate week1pay
  week1pay = payRate * week1hours;
    
  //calculate week1tax
  week1tax = week1pay * taxRate;
    
  //calculate takeHomePay1
  takeHomePay1 = week1pay - week1tax;
    
  //calculate week2pay
  week2pay = payRate * week2hours;
    
  //calculate week2tax
  week2tax = week2pay * taxRate;
    
  //calculate takeHomePay2
  takeHomePay2 = week2pay - week2tax;
    
  //calculate totals
  totalHours = week1hours + week2hours;
  totalPay = week1pay + week2pay;
  totalTax = week1tax + week2tax;
  totalTakeHome = takeHomePay1 + takeHomePay2;
    
  //Print out paystub
  
  //format output
  cout << showpoint << fixed << setprecision(2);
  //Title line
  cout << setw(44) << setfill(' ') << "PAY STUB\n";
  //Seperation line
  cout << setw(80) << setfill('_') << "" << "\n";
  //Line 1
  cout << setw(20) << setfill(' ') << "Hours Worked";
  cout << setw(20) << setfill(' ') << "Pay Rate";
  cout << setw(20) << setfill(' ') << "Weekly Pay";
  cout << setw(20) << setfill(' ') << "Tax Deductions" << endl;
  //Line 2
  cout << "Week 1: " << setw(12) << setfill(' ') << week1hours;
  cout << setw(20) << setfill(' ') << payRate;
  cout << setw(20) << setfill(' ') << week1pay;
  cout << setw(20
  ) << setfill(' ') << week1tax << endl;
  //Line 3
  cout << "Week 2: " << setw(12) << setfill(' ') << week2hours;
  cout << setw(20) << setfill(' ') << payRate;
  cout << setw(20) << setfill(' ') << week2pay;
  cout << setw(20) << setfill(' ') << week2tax;
  //Spacing
  cout << endl << endl << endl;
  //Seperation line
  cout << setw(80) << setfill('_') << "" << "\n";
  //Totals titles
  cout << setw(20) << setfill(' ') << "Total Hours";
  cout << setw(20) << setfill(' ') << "Total Pay";
  cout << setw(20) << setfill(' ') << "Total Deductions";
  cout << setw(20) << setfill(' ') << "Take Home Pay" << endl;
  //Line 4 Totals
  cout << setw(20) << setfill(' ') << totalHours;
  cout << setw(20) << setfill(' ') << totalPay;
  cout << setw(20) << setfill(' ') << totalTax;
  cout << setw(20) << setfill(' ') << totalTakeHome << endl;
  //
  return 0;
}
