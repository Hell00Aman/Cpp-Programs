#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store the number
    int num;

    // Take input from the user
    cout << "Enter a positive integer: ";
    cin >> num;

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

    // Display the reversed number
    cout << "Reversed number = " << reverse << endl;

    return 0;
}
