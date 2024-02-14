#include <iostream>
using namespace std;

/*
CSC 134
M3T1 - Rectangles
norrisa
2/12
*/


int main()
{
    // Declare variables
    int length1, width1, length2, width2;
    int area1, area2;
    // Ask the user for the width and length of two rectangles
    cout << "Enter length and width of first rectangle, separated by a space." << endl;
    cin >> length1;
    cin >> width1;
    cout << "Enter length and width of second rectangle, separated by a space." << endl;
    cin >> length2;
    cin >> width2;

    // calculate the areas
    area1 = length1 * width1;
    area2 = length2 * width2;
    // print the areas
    cout << "The first area is: " << area1 << endl;
    cout << "The second area is: " << area2 << endl;

    // Tell them which one has a larger area.
    if (area1 > area2) {
        cout << "The first rectangle is larger." << endl;
    }
    else if (area1 < area2) {
        cout << "The second rectangle is larger." << endl;
    }
    else if (area1 == area2) {
        cout << "They are the same size. " << endl;
    }

    return 0;
}