
#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store the number
    int num;

    // Take input from the user
    cout << "Enter a non-negative integer: ";
    cin >> num;

    // Initialize factorial to 1
    long long factorial = 1;

    // Calculate factorial using a for loop
    for (int i = 1; i <= num; i++) {
        // Multiply factorial by the current number
        factorial = factorial * i;
    }

    // Display the factorial
    cout << "Factorial = " << factorial << endl;

    return 0;
}
