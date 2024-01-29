/*
CSC 134
M2T2 - Apple Sales with Input
A Norris
1/24/24
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "M2T2" << endl;
    // set up variables
    string name;
    int num_apples;
    double price_per_apple;
    double total;

    // ask user for their name
    cout << "Hi, what's your name? ";
    cin >> name;
    cout << "Nice to meet you, " << name << endl;
    // ask how many apples
    cout << "How many apples would you like? ";
    cin >> num_apples;
    // ask price per apple
    cout << "How much are they each? ";
    cin >> price_per_apple;
    
    // calculate the total price
    total = num_apples * price_per_apple;

    // print the output
    // TODO: make a nice receipt


    return 0;
}