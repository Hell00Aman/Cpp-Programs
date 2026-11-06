
#include <iostream>
using namespace std;

int main() {

    // Declare and initialize an array
    int arr[] = {16, 17, 4, 3, 5, 2};

    // Calculate array size
    int size = 6;

    // Store the maximum element from the right
    int maxRight = arr[size - 1];

    // The last element is always a leader
    cout << "Leaders in the array: " << maxRight << " ";

    // Traverse the array from right to left
    for (int i = size - 2; i >= 0; i--) {

        // Check if current element is greater than
        // or equal to all elements on its right
        if (arr[i] >= maxRight) {

            // Print the leader
            cout << arr[i] << " ";

            // Update maximum element from the right
            maxRight = arr[i];
        }
    }

    return 0;
}
