#include <iostream>
using namespace std;

int main() {
    // Store the number entered by the user
    int num;

    // Take input
    cout << "Enter a number: ";
    cin >> num;

    // Print the multiplication table
    for (int i = 1; i <= 10; i++) {
        // Calculate and display the result
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}
