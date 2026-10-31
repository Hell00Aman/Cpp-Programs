
#include <iostream>
using namespace std;

int main() {
    // Declare and initialize an array
    int arr[] = {10, 20, 30, 40, 50};

    // Calculate the size of the array
    int size = 5;

    // Number to search
    int target = 30;

    // Variable to store the index
    int foundIndex = -1;

    // Check each array element
    for (int i = 0; i < size; i++) {

        // Compare current element with target
        if (arr[i] == target) {
            foundIndex = i;
            break; // Stop searching when found
        }
    }

    // Display the result
    if (foundIndex != -1) {
        cout << "Element found at index: " << foundIndex;
    } else {
        cout << "Element not found";
    }

    return 0;
}
