
#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store the number
    int num;

    // Take input from the user
    cout << "Enter a number: ";
    cin >> num;

    // Assume the number is prime
    bool isPrime = true;

    // Numbers less than 2 are not prime
    if (num < 2) {
        isPrime = false;
    } else {
        // Check whether any number divides num exactly
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    // Display the result
    if (isPrime) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
