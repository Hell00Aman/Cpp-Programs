
#include <iostream>
using namespace std;

int main() {

    // Declare and initialize an array
    int arr[] = {1, 2, 3, 4, 5};

    // Calculate array size
    int size = 5;

    // Store the last element temporarily
    int last = arr[size - 1];

    // Shift all elements one position to the right
    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Place the last element at the first position
    arr[0] = last;

    // Print the rotated array
    cout << "Rotated array: ";

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
