/******************************************************************************
Shaili Soni
Paystub
9/25/17
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
  //declare all variables
  double week1hours;
  double week2hours;
  double payRate = 10;
  double week1pay;
  double week2pay;
  double takeHomePay1;
  double takeHomePay2;
  double week1tax;
  double week2tax;
  double totalHours;
  double totalPay;
  double totalTax;
  double totalTakeHome;
  double taxRate = 0.25;

  //intialize variables
  week1hours = 37.5;
  week2hours = 30;

  //calculate week1pay
  week1pay = payRate * week1hours;

  //calculate week1tax
  week1tax = week1pay * taxRate;

  //calculate takeHomePay1
  takeHomePay1 = week1pay - week1tax;

  //calculate week2pay
  week2pay= payRate * week2hours;

  //calculate week2tax
  week2tax= week2pay * taxRate;

  //calculate takeHomePay2
  takeHomePay2= week2pay - week2tax;

  //calculate totals
  totalHours= week1hours + week2hours;
  totalPay= week1pay + week2pay;
  totalTax = week1tax + week2tax;
  totalTakeHome= takeHomePay1 + takeHomePay2;

  //Print Results
  cout << totalHours << endl;
  cout << totalPay << endl;
  cout << totalTax << endl;
  cout << totalTakeHome << endl;

  //Print Paystub
  //Print out paystub
  cout << " PAY STUB " << endl;
  cout <<
  "________________________________________________________________
  ________________" << endl;
  cout << " Hours Worked Pay Rate Total Pay | Tax Deductions "
  << endl;
  cout << " ------------ -------- --------- | -------------- " << endl;
  cout << " Week 1: "<<week1hours<< " $" << payRate<< "/hr $"
  <<week1pay<< " | $ " <<week1tax<< endl;
  cout << " Week 2: "<<week2hours<< " $" << payRate<< "/hr $"
  <<week2pay<< " | $ " <<week2tax<< endl;
  cout << endl;

  cout << endl;
  cout <<
  "________________________________________________________________
  ________________" << endl;
  cout << " Total Hours Total Pay Total Tax Deducted " <<
  endl;
  cout << " ----------- --------- ------------------ " << endl;
  cout << " " << totalHours<< " $" <<totalPay<< " $"
  <<totalTax<< endl;
  cout << endl;
  cout << " Take Home Pay " << endl;
  cout << " ------------- " << endl;
  cout << " $" <<totalTakeHome<< endl;
  cout <<
  "________________________________________________________________
  ________________" << endl;

  return 0;
}
