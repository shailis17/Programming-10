/******************************************************************************

Shaili Soni
Amortization of a Loan
3/27/18

*******************************************************************************/

#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() 
{
	double principal, APR, balance, interest, totalInterest, payment;
	int term, month = 1;

	cout << "Enter the Principal:";
	cin >> principal;
	cout << "Enter APR:";
	cin >> APR;
	cout << "Enter the term of the loan";
	cin >> term;
	cout << endl;

	APR /= 1200;
	balance = principal;

	payment = (APR * principal * pow(1 + APR, term)) / (pow(1 + APR, term) - 1);

	cout << showpoint << fixed << setprecision(2);
	cout << "Your monthly payment is: $" << payment << endl;

	cout << "Month    Balance   Interest   Monthly Payment" << endl;

	do 
	{
		interest = balance * APR;
		totalInterest += interest;
		balance = balance + interest;

		cout << "  " << month << "     $" << balance << "     $" << interest
			 << "     $" << payment << endl;

		balance -= payment;
		month++;
	} while (month <= term);

	cout << "Total Interest Paid: $" << totalInterest << endl;
	cout << "Total Cost of Loan: $" << (principal + totalInterest);

	return 0;
}
