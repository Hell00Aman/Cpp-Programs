#include <iostream>
using namespace std;

int main() {
    // Declare three variables to store the numbers
    int num1, num2, num3;

    // Take three numbers as input from the user
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Compare all three numbers to find the maximum
    if (num1 >= num2 && num1 >= num3) {
        // num1 is the maximum
        cout << "Maximum number = " << num1 << endl;
    }
    else if (num2 >= num1 && num2 >= num3) {
        // num2 is the maximum
        cout << "Maximum number = " << num2 << endl;
    }
    else {
        // num3 is the maximum
        cout << "Maximum number = " << num3 << endl;
    }

    return 0;
}
