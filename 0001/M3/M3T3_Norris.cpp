// CSC 134
// M3T3 - RNG
// norrisa
// 2/21

#include <iostream>
#include <cstdlib>  // for rand()
#include <ctime>    // for time() 
using namespace std;

int main() {
    cout << "Welcome to the craps table" << endl;
    // Set up variables
    int roll;
    int die1, die2;
    int seed;

    // Set random seed
    //cout << "Enter lucky number: ";
    //cin >> seed;
    srand(time(0)); // our lucky # is the time in msec

    // roll the dice
    //cout << "What did you roll? ";
    //cin >> roll;
    die1 = (rand() % 6) + 1; // 1 to 6
    die2 = (rand() % 6) + 1; 
    roll = die1 + die2;

    // get the results
    cout << "Roll " << die1 << " and " << die2 << " totals: " << roll << endl;
    if (roll == 7 || roll == 11) {
        cout << "You win!" << endl;
    }
    else if (roll == 2 || roll == 3 || roll == 12) {
        cout << "You lose..." << endl;
    }
    else {
        cout << "Your point is: " << roll << endl;
        cout << "TODO: roll the point" << endl;
    }

    return 0;
}