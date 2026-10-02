#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store the person's age
    int age;

    // Take age as input from the user
    cout << "Enter your age: ";
    cin >> age;

    // Check whether the person is eligible for the offer
    if (age >= 18) {
        // Person is eligible
        cout << "Person is eligible for the offer." << endl;
    }
    else {
        // Person is not eligible
        cout << "Person is not eligible for the offer." << endl;
    }

    return 0;
}
