// CSC 222 Interactive IO Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Benjamin Hertzler
// Mathematical Expressions and Interactive I/O Programming Project
// Project 2: Interest Earned

// Description: This program calculates the amount of interest accrued by a savings account.
// Required User Input: Principal, interest rate, number of times the interest is compounded.
// Program Output: A report including the above numbers as well as the current balance in the account.
// Supplied Constants: None.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    // Variables
    double balance, principal, rate, r, time_rate, interest;
    int t;

    cout << "Savings Interest" << endl;
    cout << endl << "Principal: $";
    cin >> principal;
    cout << "Interest Rate: (%) ";
    cin >> rate;
    cout << "Total number of times compounded: ";
    cin >> t;

    r = rate / 100;
    time_rate = 1 + (r / t);
    time_rate = pow(time_rate, t);

    balance = principal * time_rate;
    interest = balance - principal;

    cout << fixed << setprecision(2) << endl;
    cout << left << setw(20) << "Interest Rate: " << right << setw(11) << rate << "%" << endl;
    cout << left << setw(20) << "Times Compounded: " << right << setw(12) << t << endl;
    cout << left << setw(20) << "Principal: " << right << '$' << setw(11) << principal << endl;
    cout << left << setw(20) << "Interest: " << right << '$' << setw(11) << interest << endl;
    cout << left << setw(20) << "Amount in Savings: " << right << '$' << setw(11) << balance << endl;

}


