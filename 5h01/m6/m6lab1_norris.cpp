#include <iostream>
using namespace std;

/*
CSC 134
m6lab1 - buckshot
norrisa
4/10
Handle loading and looking at a shotgun magazine.
max 6 shells, they are live, blanks, or empty.
*/
// constants
const int MAX_SHELLS = 6;
const int EMPTY = 0;
const int BLANK = 1;
const int LIVE = 2;
// array is a global variable (all functions can see it)
int magazine[MAX_SHELLS] = {LIVE, LIVE, BLANK, BLANK, EMPTY, EMPTY};

// function prototypes
// get the name of a shell
string shell_name(int shell); 

int main() {

    cout << "M6LAB1" << endl;

    cout << "The magazine holds:" << endl;
    // loop through the magazine
    for (int i=0; i < MAX_SHELLS; i++) {
        int shell = magazine[i]; // get current shell
        string name = shell_name(shell);
        cout << name << ", ";
    }
    cout << endl;
    // 2nd option: Range-based for loop
    for (int shell: magazine) {
        cout << shell_name(shell) << " ,";
    }


    cout << endl;
}

// utility functions
string shell_name(int shell) {
    // input: number of shell (0, 1, 2)
    // output: name ("empty", "blank", "live")
    string name;
    if (shell == EMPTY) {
        name = "Empty";
    }
    if (shell == BLANK) {
        name = "Blank";
    }
    if (shell == LIVE) {
        name = "Live";
    }
    return name;
}