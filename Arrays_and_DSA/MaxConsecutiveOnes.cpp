
#include <iostream>
using namespace std;

int main() {

    // Declare and initialize a binary array
    int arr[] = {1, 1, 0, 1, 1, 1};

    // Calculate array size
    int size = 6;

    // Count consecutive ones
    int count = 0;

    // Store the maximum consecutive ones
    int maxCount = 0;

    // Traverse the array
    for (int i = 0; i < size; i++) {

        // Check if current element is 1
        if (arr[i] == 1) {

            // Increase consecutive count
            count++;

            // Update maximum count
            if (count > maxCount) {
                maxCount = count;
            }
        }

        else {
            // Reset count when 0 is found
            count = 0;
        }
    }

    // Display the result
    cout << "Maximum consecutive ones: " << maxCount;

    return 0;
}
