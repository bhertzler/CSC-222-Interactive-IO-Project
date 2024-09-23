// CSC 222 Interactive IO Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Benjamin Hertzler
// Mathematical Expressions and Interactive I/O Programming Project
// Project 1: Ingredient Adjuster

// Description: This program alters a cookie recipe so that the ingredients are proportional to the intended number of cookies.
// Required User Input: The total number of cookies required.
// Program Output: The required quantities of each ingredient.
// Supplied Constants: The original cookie recipe.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Variables
	int cookies;
	double sugar, butter, flour;
	
	// Constants
	const int RECIPE_COOKIES = 48;
	const double RECIPE_SUGAR = 1.5, RECIPE_BUTTER = 1, RECIPE_FLOUR = 2.75;

	cout << "Cookie Recipe Ingredient Adjuster" << endl;
	cout << endl << "Total number of cookies desired: ";
	cin >> cookies;

	sugar = cookies * (RECIPE_SUGAR / RECIPE_COOKIES);
	butter = cookies * (RECIPE_BUTTER / RECIPE_COOKIES);
	flour = cookies * (RECIPE_FLOUR / RECIPE_COOKIES);

	cout << endl << "Adjusted Requirements: " << setprecision(3) << endl;
	cout << setw(10) << left << "Sugar: " << sugar << " cups." << endl;
	cout << setw(10) << left << "Butter: " << butter << " cups." << endl;
	cout << setw(10) << left << "Flour: " << flour << " cups." << endl;

}


