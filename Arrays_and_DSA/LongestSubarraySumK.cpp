
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n, k;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> k;

    unordered_map<long long, int> prefixIndex;

    long long prefixSum = 0;
    int maxLength = 0;

    for (int i = 0; i < n; i++) {

        // Calculate prefix sum
        prefixSum += arr[i];

        // If entire subarray from index 0 has sum k
        if (prefixSum == k) {
            maxLength = max(maxLength, i + 1);
        }

        // Check whether required prefix sum exists
        long long required = prefixSum - k;

        if (prefixIndex.find(required) != prefixIndex.end()) {
            int length = i - prefixIndex[required];

            maxLength = max(maxLength, length);
        }

        // Store only the first occurrence
        if (prefixIndex.find(prefixSum) == prefixIndex.end()) {
            prefixIndex[prefixSum] = i;
        }
    }

    cout << maxLength << endl;

    return 0;
}
