
#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store the number
    int num;

    // Take input from the user
    cout << "Enter a positive integer: ";
    cin >> num;

    // Store the original number
    int original = num;

    // Initialize sum to 0
    int sum = 0;

    // Extract each digit and calculate its cube
    while (num > 0) {
        // Get the last digit
        int digit = num % 10;

        // Add the cube of the digit to sum
        sum = sum + (digit * digit * digit);

        // Remove the last digit
        num = num / 10;
    }

    // Compare the sum with the original number
    if (sum == original) {
        cout << "The number is an Armstrong number." << endl;
    }
    else {
        cout << "The number is not an Armstrong number." << endl;
    }

    return 0;
}
