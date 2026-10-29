
#include <iostream>
using namespace std;

int main() {
    int arr[8] = {0, 1, 0, 3, 12, 0, 5, 7};
    int size = 8;

    // Position where the next non-zero element goes
    int index = 0;

    // Move all non-zero elements to the beginning
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            arr[index] = arr[i];
            index++;
        }
    }

    // Fill the remaining positions with zeros
    while (index < size) {
        arr[index] = 0;
        index++;
    }

    // Print the final array
    cout << "Array after moving zeros: ";

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
