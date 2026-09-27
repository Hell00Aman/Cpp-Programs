#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store the number
    int num;

    // Take input from the user
    cout << "Enter a number: ";
    cin >> num;

    // Check whether the number is divisible by 2
    if (num % 2 == 0) {
        // Number is even
        cout << "The number is even." << endl;
    }
    else {
        // Number is odd
        cout << "The number is odd." << endl;
    }

    return 0;
}
