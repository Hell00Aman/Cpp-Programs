
#include <iostream>
#include <climits>
using namespace std;

int main() {

    // Declare and initialize an array
    int arr[] = {10, 25, 5, 40, 30};

    // Calculate array size
    int size = 5;

    // Initialize largest and second largest
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    // Traverse the array
    for (int i = 0; i < size; i++) {

        // Check if current element is largest
        if (arr[i] > largest) {

            // Previous largest becomes second largest
            secondLargest = largest;

            // Update largest
            largest = arr[i];
        }

        // Check if current element is second largest
        else if (arr[i] > secondLargest && arr[i] != largest) {

            secondLargest = arr[i];
        }
    }

    // Display the result
    if (secondLargest == INT_MIN) {
        cout << "Second largest element not found";
    }
    else {
        cout << "Second largest element: " << secondLargest;
    }

    return 0;
}
