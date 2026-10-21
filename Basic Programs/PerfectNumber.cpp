#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int num;
    int sum = 0;

    // Take input from the user
    cout << "Enter a positive number: ";
    cin >> num;

    // Check whether the input is valid
    if (num <= 0) {
        cout << "Please enter a positive number." << endl;
    } else {
        // Find all proper divisors of the number
        for (int i = 1; i < num; i++) {
            // Check if i divides num exactly
            if (num % i == 0) {
                sum = sum + i;
            }
        }

        // Compare the sum with the original number
        if (sum == num) {
            cout << num << " is a perfect number." << endl;
        } else {
            cout << num << " is not a perfect number." << endl;
        }
    }

    return 0;
}
