
#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int num;
    int evenCount = 0;
    int oddCount = 0;

    // Take input from the user
    cout << "Enter a non-negative integer: ";
    cin >> num;

    // Check whether the input is valid
    if (num < 0) {
        cout << "Please enter a non-negative integer." << endl;
    } else {
        // Handle zero as a single digit
        if (num == 0) {
            evenCount = 1;
        }

        // Extract and check each digit
        while (num > 0) {
            int digit = num % 10;

            if (digit % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }

            // Remove the last digit
            num = num / 10;
        }

        // Display the counts
        cout << "Even digits = " << evenCount << endl;
        cout << "Odd digits = " << oddCount << endl;
    }

    return 0;
}
