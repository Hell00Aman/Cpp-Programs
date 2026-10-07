#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store the year
    int year;

    // Take year as input from the user
    cout << "Enter a year: ";
    cin >> year;

    // Check whether the year is a leap year
    if (year % 400 == 0) {
        // Year is divisible by 400, so it is a leap year
        cout << "The year is a leap year." << endl;
    }
    else if (year % 100 == 0) {
        // Year is divisible by 100 but not by 400
        cout << "The year is not a leap year." << endl;
    }
    else if (year % 4 == 0) {
        // Year is divisible by 4, so it is a leap year
        cout << "The year is a leap year." << endl;
    }
    else {
        // Year is not divisible by 4
        cout << "The year is not a leap year." << endl;
    }

    return 0;
}
