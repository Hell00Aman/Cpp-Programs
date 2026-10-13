
#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store the number
    int num;

    // Take input from the user
    cout << "Enter a positive integer: ";
    cin >> num;

    // Initialize sum to 0
    int sum = 0;

    // Extract each digit and calculate the sum
    while (num > 0) {
        // Get the last digit
        int digit = num % 10;

        // Add the digit to sum
        sum = sum + digit;

        // Remove the last digit
        num = num / 10;
    }

    // Display the sum of digits
    cout << "Sum of digits = " << sum << endl;

    return 0;
}
