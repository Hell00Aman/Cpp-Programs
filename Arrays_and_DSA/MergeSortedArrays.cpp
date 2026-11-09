
#include <iostream>
using namespace std;

int main() {

    // First sorted array
    int arr1[] = {1, 3, 5, 7};

    // Second sorted array
    int arr2[] = {2, 4, 6, 8};

    // Sizes of both arrays
    int n1 = 4;
    int n2 = 4;

    // Create a third array to store merged elements
    int merged[8];

    // Index variables for all three arrays
    int i = 0, j = 0, k = 0;

    // Compare elements of both arrays
    while (i < n1 && j < n2) {

        if (arr1[i] < arr2[j]) {
            merged[k] = arr1[i];
            i++;
        }
        else {
            merged[k] = arr2[j];
            j++;
        }

        k++;
    }

    // Copy remaining elements from first array
    while (i < n1) {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    // Copy remaining elements from second array
    while (j < n2) {
        merged[k] = arr2[j];
        j++;
        k++;
    }

    // Print the merged sorted array
    cout << "Merged array: ";

    for (int x = 0; x < n1 + n2; x++) {
        cout << merged[x] << " ";
    }

    return 0;
}
