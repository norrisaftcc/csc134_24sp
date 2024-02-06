/*
M2LAB1
Crate Sales
Norrisa
2/5/24
*/
#include <iostream>
using namespace std;

int main() {
    // Take 1 - just a rectangle
    // Declare variables
    double length, width, height;
    double volume;
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;
    // Ask for user input
    cout << "Length? ";
    cin >> length;
    cout << "Width? ";
    cin >> width;
    cout << "Height? ";
    cin >> height;

    // Do calculations
    volume = length * width * height;

    // print the answer
    cout << "The volume is: " << volume << endl; 

    return 0;
}