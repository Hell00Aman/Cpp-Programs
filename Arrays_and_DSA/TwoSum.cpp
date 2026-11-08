
#include <iostream>
using namespace std;

int main() {

    // Declare and initialize the array
    int arr[] = {2, 7, 11, 15};

    // Calculate array size
    int size = 4;

    // Target sum
    int target = 9;

    // Variable to check whether a pair is found
    bool found = false;

    // First loop selects the first element
    for (int i = 0; i < size; i++) {

        // Second loop selects the next element
        for (int j = i + 1; j < size; j++) {

            // Check whether their sum equals target
            if (arr[i] + arr[j] == target) {

                // Display the pair and their indices
                cout << "Pair found: "
                     << arr[i] << " and " << arr[j] << endl;

                cout << "Indices: " << i << " and " << j;

                found = true;
                break;
            }
        }

        // Stop the outer loop if pair is found
        if (found) {
            break;
        }
    }

    // Display message if no pair exists
    if (!found) {
        cout << "No pair found";
    }

    return 0;
}
