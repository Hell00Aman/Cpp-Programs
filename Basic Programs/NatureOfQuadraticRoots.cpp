#include <iostream>
using namespace std;

int main() {
    // Declare variables for the coefficients of the quadratic equation
    // Quadratic equation: ax^2 + bx + c = 0
    int a, b, c;

    // Take the coefficients as input from the user
    cout << "Enter the values of a, b and c: ";
    cin >> a >> b >> c;

    // Calculate the discriminant
    // Discriminant = b^2 - 4ac
    int discriminant = (b * b) - (4 * a * c);

    // Check the nature of the roots using the discriminant
    if (discriminant > 0) {
        // Two distinct real roots
        cout << "Roots are real and distinct." << endl;
    }
    else if (discriminant == 0) {
        // Two equal real roots
        cout << "Roots are real and equal." << endl;
    }
    else {
        // Complex roots
        cout << "Roots are imaginary (complex)." << endl;
    }

    return 0;
}
