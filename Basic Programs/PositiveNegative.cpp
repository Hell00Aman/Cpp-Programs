#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store the number
    int num;

    // Take input from the user
    cout << "Enter a number: ";
    cin >> num;

    // Check whether the number is positive, negative, or zero
    if (num > 0) {
        // Number is greater than zero
        cout << "The number is positive." << endl;
    }
    else if (num < 0) {
        // Number is less than zero
        cout << "The number is negative." << endl;
    }
    else {
        // Number is equal to zero
        cout << "The number is zero." << endl;
    }

    return 0;
}
