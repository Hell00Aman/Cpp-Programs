
#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int num;
    int binary = 0;
    int place = 1;

    // Take input from the user
    cout << "Enter a non-negative decimal number: ";
    cin >> num;

    // Check whether the input is valid
    if (num < 0) {
        cout << "Please enter a non-negative number." << endl;
    } else if (num == 0) {
        cout << "Binary = 0" << endl;
    } else {
        // Convert decimal to binary
        while (num > 0) {
            int remainder = num % 2;

            // Add the remainder at the current place
            binary = binary + remainder * place;

            // Move to the next binary place
            place = place * 10;

            // Divide the number by 2
            num = num / 2;
        }

        // Display the binary representation
        cout << "Binary = " << binary << endl;
    }

    return 0;
}
