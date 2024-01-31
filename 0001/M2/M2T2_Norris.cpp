#include <iostream>
using namespace std;

/*
CSC 134
M2T2 - Apple Orchard Part 2
norrisa
1/31/24
Simple interactive store.
*/


int main()
{
    // Declare variables
    string name;
    int apples;
    double price_each;
    double total;
    // Ask user for information
    cout << "Hi, what's your name? ";
    cin >> name;
    cout << "Welcome to our orchard, " << name << endl;
    // Ask how many apples they want
    cout << "How many apples do you want? ";
    cin >> apples;
    // TODO: Ask the price for each

    // Do calculations
    total = apples * price_each;

    // Print the output
    // print number of apples, price each
    cout << "You ordered " << apples << " apples." << endl;
    cout << "Cost is $" << price_each << " each." << endl;

    // then print the total price
    cout << "The price for all of them is $" << total << endl;
    // TODO: ask the user how many to buy

    // TODO: Make prices look "Correct" (e.g. $25.00)


    return 0;
}