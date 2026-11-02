
#include <iostream>
using namespace std;

int main() {

    // Declare a sorted array
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};

    // Calculate array size
    int size = 8;

    // Index for storing unique elements
    int j = 0;

    // Traverse the array
    for (int i = 1; i < size; i++) {

        // Check if current element is different
        // from the last unique element
        if (arr[i] != arr[j]) {

            // Move to the next position
            j++;

            // Store the unique element
            arr[j] = arr[i];
        }
    }

    // Total number of unique elements
    int newSize = j + 1;

    // Print the unique elements
    cout << "Array after removing duplicates: ";

    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nNumber of unique elements: " << newSize;

    return 0;
}
