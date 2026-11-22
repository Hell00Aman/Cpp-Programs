
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n, k;

    cout << "Enter array size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target sum: ";
    cin >> k;

    unordered_map<int, int> prefixCount;

    int prefixSum = 0;
    int count = 0;

    // Initially, an empty prefix has sum 0
    prefixCount[0] = 1;

    for (int i = 0; i < n; i++) {

        prefixSum += arr[i];

        // Check whether a previous prefix gives sum k
        int remaining = prefixSum - k;

        if (prefixCount.find(remaining) != prefixCount.end()) {
            count += prefixCount[remaining];
        }

        // Store current prefix sum
        prefixCount[prefixSum]++;
    }

    cout << "Number of Subarrays: " << count << endl;

    return 0;
}
