
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Step 1: Sort the array
    sort(nums.begin(), nums.end());

    // Step 2: Check each element
    for (int i = 0; i < n - 2; i++) {

        // Skip duplicate first elements
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }

        int left = i + 1;
        int right = n - 1;

        // Step 3: Use two pointers
        while (left < right) {

            int sum = nums[i] + nums[left] + nums[right];

            if (sum == 0) {
                cout << nums[i] << " "
                     << nums[left] << " "
                     << nums[right] << endl;

                left++;
                right--;

                // Skip duplicate left elements
                while (left < right &&
                       nums[left] == nums[left - 1]) {
                    left++;
                }

                // Skip duplicate right elements
                while (left < right &&
                       nums[right] == nums[right + 1]) {
                    right--;
                }
            }
            else if (sum < 0) {
                left++;
            }
            else {
                right--;
            }
        }
    }

    return 0;
}
