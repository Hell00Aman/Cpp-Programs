
#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int base, exponent;
    long long result = 1;

    // Take input from the user
    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter a non-negative exponent: ";
    cin >> exponent;

    // Check whether the exponent is valid
    if (exponent < 0) {
        cout << "Please enter a non-negative exponent." << endl;
    } else {
        // Multiply the base repeatedly
        for (int i = 1; i <= exponent; i++) {
            result = result * base;
        }

        // Display the answer
        cout << base << " raised to the power "
             << exponent << " = " << result << endl;
    }

    return 0;
}
