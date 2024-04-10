#include <iostream>
using namespace std;
#include "M6LAB1_utility.h"
/*
CSC 134
M6LAB1 - Buckshot Roulette 
norrisa
4/10
Array representing a magazine containing live and dummy rounds
*/

// constant variables
const int MAX_SIZE = 6; // never more than six shells, size of array
const int EMPTY = 0;    // we can refer to shells as BLANK or LIVE instead of using a number 
const int BLANK = 1;
const int LIVE  = 2;

// global array for the magazine
int magazine[MAX_SIZE] = {LIVE, BLANK, LIVE, BLANK, EMPTY, EMPTY};

int main() {
    cout << "M6LAB1" << endl;
    // range based for loop
    for (int shell : magazine) {
        //cout << shell << ", ";
        cout << shell_name(shell) << ", ";
    }
    cout << endl << endl;
    // index based for loop
    for (int i=0; i < MAX_SIZE; i++) {
        int shell = magazine[i];
        string name = shell_name(shell);
        cout << name << ", ";
    }

    cout << endl;
    return 0;
}