
#include <iostream>
using namespace std;

int main() {

    // Declare and initialize an array
    int arr[] = {1, -2, 3, -4, 5, -6, 7};

    // Calculate array size
    int size = 7;

    // Index for the next negative element
    int j = 0;

    // Traverse the array
    for (int i = 0; i < size; i++) {

        // Check if the current element is negative
        if (arr[i] < 0) {

            // Swap negative element with element at index j
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

            // Move the negative position forward
            j++;
        }
    }

    // Print the rearranged array
    cout << "Rearranged array: ";

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
