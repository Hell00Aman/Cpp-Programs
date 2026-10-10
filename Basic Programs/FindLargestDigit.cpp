#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store the number
    int num;

    // Take input from the user
    cout << "Enter a positive integer: ";
    cin >> num;

    // Initialize the largest digit to 0
    int largest = 0;

    // Extract and check each digit
    while (num > 0) {
        // Get the last digit
        int digit = num % 10;

        // Update largest if the current digit is greater
        if (digit > largest) {
            largest = digit;
        }

        // Remove the last digit
        num = num / 10;
    }

    // Display the largest digit
    cout << "Largest digit = " << largest << endl;

    return 0;
}
