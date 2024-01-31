// CSC 134
// M2LAB1 - Areas
// Norrisa
// 1/31/24

#include <iostream>
using namespace std;

int main() {
    cout << "Part 1 - Area of a Rectangle" << endl;
    // declare variables
    double length;
    double width;
    //double height; // for later
    double area;

    // get input
    cout << "What is the length of the rectangle? ";
    cin >> length;
    cout << "What is the width of the rectangle? ";
    cin >> width;

    // do calculations
    area = length * width;

    // print output
    cout << "The area of the rectangle is: " << area << endl;

}