
#include <iostream>
using namespace std;

int main() {

    // Declare and initialize the array
    int arr[] = {1, 2, 3, 7, 5};

    // Calculate array size
    int size = 5;

    // Target sum
    int target = 12;

    // Starting index of the subarray
    int start = 0;

    // Store the current subarray sum
    int currentSum = 0;

    // Traverse the array using the end index
    for (int end = 0; end < size; end++) {

        // Add current element to the sum
        currentSum += arr[end];

        // Reduce the window while sum is too large
        while (currentSum > target && start <= end) {
            currentSum -= arr[start];
            start++;
        }

        // Check whether target sum is found
        if (currentSum == target) {
            cout << "Subarray found!" << endl;
            cout << "Starting index: " << start << endl;
            cout << "Ending index: " << end << endl;
            cout << "Elements: ";

            // Print the matching subarray
            for (int i = start; i <= end; i++) {
                cout << arr[i] << " ";
            }

            return 0;
        }
    }

    // Display message if no subarray is found
    cout << "No subarray found";

    return 0;
}
