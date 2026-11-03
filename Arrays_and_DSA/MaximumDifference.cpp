
#include <iostream>
#include <climits>
using namespace std;

int main() {

    // Declare and initialize an array
    int arr[] = {2, 3, 10, 6, 4, 8, 1};

    // Calculate array size
    int size = 7;

    // Store the minimum element found so far
    int minElement = arr[0];

    // Store the maximum difference
    int maxDifference = INT_MIN;

    // Traverse the array from the second element
    for (int i = 1; i < size; i++) {

        // Calculate difference using current element
        int difference = arr[i] - minElement;

        // Update maximum difference
        if (difference > maxDifference) {
            maxDifference = difference;
        }

        // Update minimum element
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }

    // Display the result
    cout << "Maximum difference: " << maxDifference;

    return 0;
}
