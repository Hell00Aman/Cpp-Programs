
#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int num, original, digit;
    int sum = 0;

    // Take input from the user
    cout << "Enter a non-negative integer: ";
    cin >> num;

    // Store the original number
    original = num;

    // Check whether the input is valid
    if (num < 0) {
        cout << "Please enter a non-negative integer." << endl;
    } else {
        // Extract each digit
        do {
            digit = num % 10;

            // Calculate the factorial of the digit
            int factorial = 1;

            for (int i = 1; i <= digit; i++) {
                factorial = factorial * i;
            }

            // Add the factorial to the sum
            sum = sum + factorial;

            // Remove the last digit
            num = num / 10;

        } while (num > 0);

        // Check whether the number is a Strong Number
        if (sum == original) {
            cout << original << " is a Strong Number." << endl;
        } else {
            cout << original << " is not a Strong Number." << endl;
        }
    }

    return 0;
}
