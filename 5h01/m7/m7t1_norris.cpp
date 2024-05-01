#include <iostream>
using namespace std;
#include "Restaurant.h"

// CSC 134
// M7T1 - Restaurant Reviews
// norrisa
// 4/29/24

int main() {
    cout << "Restaurant Review Program" << endl;
    // make a new Restaurant object
    cout << "Breakfast: " << endl;
    Restaurant breakfast = Restaurant("Waffle House", 3.0);
    breakfast.setComment("Hash browns were too dry.");
    //cout << breakfast.getName() << endl;
    //cout << breakfast.getRating() << endl;
    breakfast.printReview();
    return 0;
}