/*
CSC 134
M1T1 - Hello World
A Norris
1/17/24
*/
#include <iostream>
using namespace std;

int main() {
    // introduce yourself
  cout << "Hello World!" << endl;
  string pokemon = "Bulbasaur";
  cout << "My favorite pokemon is " << pokemon << endl;
  cout << "\n" << endl; // same thing
  // ask the user a question
  cout << "What's yours? ";
  string answer;
  cin >> answer;
  // say something back
  cout << "You said " << answer << endl;
  cout << "I guess that's OK." << endl << endl;
  return 0;
}
