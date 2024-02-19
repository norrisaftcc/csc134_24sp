// CSC 134
// M3LAB 1 - Choices
// name
// date

// compiler directives
// (required for the program to run)
#include <iostream>
using namespace std;

// beginning of the main() method
int main() {
  
  // this program will ask a question and respond to it.
  // You should run it, and test it by typing in different values.
  // Example test values: 1, 2, 3, banana (try all of them)

  // declare the variable we need
  int choice; 

  // ask the question
  cout << "You're sitting in C++ class. " << endl;
  cout << "Do you 1: Fall Asleep, or 2: Stay awake?" << endl;
  cout << "Type 1 or 2: "; 
  cin >> choice;

  // using if, make a decision based on the user's choice

  if (1 == choice) {
  	cout << "You doze off softly to the sound of clicking keyboards..." << endl;
  }
  else if (2 == choice) {
  	cout << "You keep your eyes open and start writing some if statements..." << endl;
    cout << "A classmate asks if you want to go over the notes over coffee after." << endl;
    cout << "Type 1 for yes or 2 for no: ";
    cin >> choice;
    if (1 == choice) {
        cout << "You go" << endl;
    }
    else if (2 == choice) {
        cout << "You don't go" << endl;
    }
    else {
        cout << "That's not an option, it's yes or no." << endl;
    }
  }
  else {
  	cout << "I'm sorry, that is not a valid choice." << endl;
  }

  // finish up
  cout << "Thanks for playing!" << endl; // this runs no matter what they choose
  return 0; // exit without error

} // end of the main() method