
#include <iostream>
using namespace std;

int main() {
    // Array containing numbers from 1 to 6
    int arr[] = {1, 2, 4, 5, 6};

    // Size of the array
    int size = 5;

    // Total number of elements should be 6
    int n = size + 1;

    // Calculate expected sum: 1 + 2 + ... + n
    int totalSum = n * (n + 1) / 2;

    // Calculate actual sum of array elements
    int actualSum = 0;

    for (int i = 0; i < size; i++) {
        actualSum += arr[i];
    }

    // Difference gives the missing number
    int missingNumber = totalSum - actualSum;

    // Display the result
    cout << "Missing number: " << missingNumber;

    return 0;
}
