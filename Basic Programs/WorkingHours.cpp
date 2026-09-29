#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store the working hour
    int hour;

    // Take hour input from the user
    cout << "Enter the hour: ";
    cin >> hour;

    // Check if the hour is between 9 AM and 6 PM
    if (hour >= 9 && hour <= 18) {
        // The given hour is within working hours
        cout << "Working Hours" << endl;
    }
    else {
        // The given hour is outside working hours
        cout << "Not Working Hours" << endl;
    }

    return 0;
}
