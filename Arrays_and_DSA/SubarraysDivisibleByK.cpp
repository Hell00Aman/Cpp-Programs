
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n, k;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cin >> k;

    unordered_map<int, int> remainderCount;

    // Empty prefix sum has remainder 0
    remainderCount[0] = 1;

    int prefixSum = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {

        prefixSum += nums[i];

        // Calculate positive remainder
        int remainder = ((prefixSum % k) + k) % k;

        // Same remainder means subarray sum is divisible by k
        count += remainderCount[remainder];

        // Store this remainder
        remainderCount[remainder]++;
    }

    cout << count << endl;

    return 0;
}
