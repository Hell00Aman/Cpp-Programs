#include <iostream>
using namespace std;

int main() {
    // Declare two integer variables
    int num1, num2;

    // Take input from the user
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Compare the two numbers
    if (num1 > num2) {
        // num1 is greater
        cout << "Maximum number = " << num1 << endl;
    }
    else if (num2 > num1) {
        // num2 is greater
        cout << "Maximum number = " << num2 << endl;
    }
    else {
        // Both numbers are equal
        cout << "Both numbers are equal." << endl;
    }

    return 0;
}
