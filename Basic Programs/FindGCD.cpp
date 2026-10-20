#include <iostream>
using namespace std;

int main() {
    // Declare two variables
    int a, b;

    // Take input from the user
    cout << "Enter two positive numbers: ";
    cin >> a >> b;

    // Check whether the inputs are positive
    if (a <= 0 || b <= 0) {
        cout << "Please enter positive numbers." << endl;
    } else {
        // Start checking from the smaller number
        int gcd = 1;
        int smaller;

        if (a < b) {
            smaller = a;
        } else {
            smaller = b;
        }

        int i = 1;

        // Find the greatest common divisor
        while (i <= smaller) {
            if (a % i == 0 && b % i == 0) {
                gcd = i;
            }

            i++;
        }

        // Display the result
        cout << "GCD = " << gcd << endl;
    }

    return 0;
}
