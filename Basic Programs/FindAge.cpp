#include <iostream>
using namespace std;

int main() {
    // Declare variables to store birth year and current year
    int birthYear, currentYear;

    // Take birth year as input
    cout << "Enter your birth year: ";
    cin >> birthYear;

    // Take current year as input
    cout << "Enter the current year: ";
    cin >> currentYear;

    // Calculate the age
    int age = currentYear - birthYear;

    // Display the person's age
    cout << "Age of the person = " << age << " years" << endl;

    return 0;
}
