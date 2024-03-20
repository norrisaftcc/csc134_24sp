#include <iostream>

using namespace std;
/*
CSC 134
M5T2 - Functions Part 2
norrisa
3/20/24
Create the original 'table of squares' but in C++.

*/
// Function prototypes
int calc_square(int num);
void print_line(int first, int second);

int main()
{
    // declare variables
    int num, num_squared;
    const int MAX = 10; // largest number in table
    // print top of table
    cout << "Number\tNumber Squared" << endl;
    cout << "________________________" << endl;

    for (num = 1; num <= MAX; num++) {
        // find the square
        num_squared = calc_square(num);
        // print the next line of the table
        cout << num << "\t" << num_squared << endl;
    }

    return 0;
}

// Function definitions
int calc_square(int num) {
    // input: a number
    // output: the square of that number
    int answer = num * num;
    return answer;
}

void print_line(int first, int second) {

}
