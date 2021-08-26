/******************************************************************************

Shaili Soni
006. Fund Raiser
9/27/2017

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    //declare variables
    int totalTicketsSold;
    int numStudentTicketsSold = 150;
    int numAdultTicketsSold = 100;
    double studentTicketPrice = 5;
    double adultTicketPrice = 10;
    double totalSales;
    double donationPercent = 50;
    double donationAmount;
    double totalCosts = 650;
    double totalProfit;

    //your code goes here!
    //calculate number of tickets numStudentTicketsSold
    totalTicketsSold= numStudentTicketsSold + numAdultTicketsSold;
    
    //calculate total ticket sales
    totalSales= studentTicketPrice * numStudentTicketsSold + adultTicketPrice * numAdultTicketsSold;
    
    //calculate donationAmount
    donationAmount= totalSales * 0.5;
    
    //calculate totalProfit
    totalProfit= totalSales - donationAmount - totalCosts;
    
    cout <<"Number of Tickets Sold: ....... $" << totalTicketsSold << endl;
    cout <<"Ticket Sales: ................. $"<< totalSales << endl;
    cout <<"Donation Percentage: .......... " << donationPercent << "%" << endl;
    cout <<"Donation Amount:............... $" << donationAmount << endl;
    cout <<"Costs of Show:................. $" << totalCosts << endl;
    cout <<"Profit:........................ $" << totalProfit;

    return 0;
}

