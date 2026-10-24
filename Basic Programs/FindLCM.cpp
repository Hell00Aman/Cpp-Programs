
#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int a, b;

    // Take input from the user
    cout << "Enter two positive numbers: ";
    cin >> a >> b;

    // Check whether the numbers are valid
    if (a <= 0 || b <= 0) {
        cout << "Please enter positive numbers." << endl;
    } else {
        // Start from the larger number
        int lcm;

        if (a > b) {
            lcm = a;
        } else {
            lcm = b;
        }

        // Find the first number divisible by both
        while (lcm % a != 0 || lcm % b != 0) {
            lcm++;
        }

        // Display the LCM
        cout << "LCM = " << lcm << endl;
    }

    return 0;
}
