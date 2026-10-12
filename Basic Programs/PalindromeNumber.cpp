#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store the number
    int num;

    // Take input from the user
    cout << "Enter a positive integer: ";
    cin >> num;

    // Store the original number for comparison
    int original = num;

    // Initialize reverse to 0
    int reverse = 0;

    // Reverse the number using a while loop
    while (num > 0) {
        // Extract the last digit
        int digit = num % 10;

        // Add the digit to the reversed number
        reverse = reverse * 10 + digit;

        // Remove the last digit
        num = num / 10;
    }

    // Compare the original and reversed numbers
    if (original == reverse) {
        cout << "The number is a palindrome." << endl;
    }
    else {
        cout << "The number is not a palindrome." << endl;
    }

    return 0;
}
