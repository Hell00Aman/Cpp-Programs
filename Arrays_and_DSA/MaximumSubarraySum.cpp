
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int currentSum = arr[0];
    int maxSum = arr[0];

    for (int i = 1; i < n; i++) {
        // Either extend the previous subarray or start a new one
        currentSum = max(arr[i], currentSum + arr[i]);

        // Update maximum subarray sum
        maxSum = max(maxSum, currentSum);
    }

    cout << "Maximum Subarray Sum: " << maxSum << endl;

    return 0;
}
