#include <iostream>
using namespace std;
#include "m6lab1_utils.h"

/*
CSC 134
m6lab1 - buckshot
norrisa
4/10
Handle loading and looking at a shotgun magazine.
max 6 shells, they are live, blanks, or empty.
*/

// array is a global variable (all functions can see it)
int magazine[MAX_SHELLS] = {LIVE, LIVE, BLANK, BLANK, EMPTY, EMPTY};



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

