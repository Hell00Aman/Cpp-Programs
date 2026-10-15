
#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store the number
    int num;

    // Take input from the user
    cout << "Enter a positive integer: ";
    cin >> num;

    // Initialize the digit count to 0
    int count = 0;

    // Count the digits using a while loop
    while (num > 0) {
        // Remove the last digit
        num = num / 10;

        // Increase the digit count
        count++;
    }

    // Display the total number of digits
    cout << "Number of digits = " << count << endl;

    return 0;
}
