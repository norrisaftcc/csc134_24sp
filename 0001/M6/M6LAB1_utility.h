#ifndef M6LAB1_UTILITY_H
#define M6LAB1_UTILITY_H
// Header files let you add more functions to your program
#include <iostream>
using namespace std;
// Prototypes
string shell_name(int shell);


// Definitions
string shell_name(int shell) {
    // input: the shell number (0, 1, 2)
    // output: the name ("Empty", "Blank", "Live")
    string name;
    const int EMPTY = 0;    // we can refer to shells as BLANK or LIVE instead of using a number 
    const int BLANK = 1;
    const int LIVE  = 2;
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

#endif // M6LAB1_UTILITY_H