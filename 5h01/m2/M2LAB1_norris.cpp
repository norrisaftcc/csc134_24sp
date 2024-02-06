// CSC 134
// M2LAB1 - Areas
// Norrisa
// 1/31/24

#include <iostream>
using namespace std;

void calculate_rectangle() {
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

int main() {
    cout << "M2T1 - General Crates Inc." << endl;
    // declare variables
    double length;
    double width;
    double height; 
    double volume;
    // constants don't change during the run
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;

    // calculate 3d box (rectangular prism)
    // get input
    cout << "Input box dimensions." << endl;
    cout << "What is the length? ";
    cin >> length;
    cout << "What is the width? ";
    cin >> width;
    cout << "What is the height? ";
    cin >> height;

    // do calculations
    volume = length * width * height;



    // Part 2: Calculate the cost of the box
    // calc. price to make it
    // calc. price it's sold at
    // calc. profit

    // Part 3: Print the output
    cout << "The volume of the box is: " << volume << endl;


    return 0;
}