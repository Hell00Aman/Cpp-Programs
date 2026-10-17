
#include <iostream>
using namespace std;

int main() {
    // Store how many terms the user wants
    int n;

    // Take input from the user
    cout << "Enter the number of terms: ";
    cin >> n;

    // First two Fibonacci numbers
    int first = 0;
    int second = 1;

    // Check whether the input is valid
    if (n <= 0) {
        cout << "Please enter a positive number." << endl;
    } else {
        cout << "Fibonacci Series: ";

        // Generate the required terms
        for (int i = 1; i <= n; i++) {
            cout << first << " ";

            // Calculate the next term
            int next = first + second;

            // Update the two numbers
            first = second;
            second = next;
        }

        cout << endl;
    }

    return 0;
}
