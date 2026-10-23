
#include <iostream>
using namespace std;

int main() {
    // Declare variables for the base and exponent
    int base, exponent;

    // Take input from the user
    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the exponent (non-negative): ";
    cin >> exponent;

    // Check whether the exponent is valid
    if (exponent < 0) {
        cout << "Please enter a non-negative exponent." << endl;
        return 0;
    }

    // Initialize the result to 1
    long long result = 1;

    // Multiply the base repeatedly
    for (int i = 1; i <= exponent; i++) {
        result = result * base;
    }

    // Display the result
    cout << base << " raised to the power "
         << exponent << " = " << result << endl;

    return 0;
}
