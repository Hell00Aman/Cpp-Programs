
#include <iostream>
#include <climits>
using namespace std;

int main() {
    // Declare an array of 5 numbers
    int arr[5];

    // Take input from the user
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Initialize the largest and second largest values
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    // Find the largest and second largest distinct values
    for (int i = 0; i < 5; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest &&
                   arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    // Display the result
    if (secondLargest == INT_MIN) {
        cout << "Second largest distinct number does not exist."
             << endl;
    } else {
        cout << "Second largest = " << secondLargest << endl;
    }

    return 0;
}
