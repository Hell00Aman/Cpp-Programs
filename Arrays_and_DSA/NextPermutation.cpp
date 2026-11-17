
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

    // Step 1: Find the breakpoint
    int index = -1;

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] < arr[i + 1]) {
            index = i;
            break;
        }
    }

    // Step 2: Find the next greater element
    if (index != -1) {
        for (int i = n - 1; i > index; i--) {
            if (arr[i] > arr[index]) {
                swap(arr[i], arr[index]);
                break;
            }
        }
    }

    // Step 3: Reverse the suffix
    reverse(arr.begin() + index + 1, arr.end());

    cout << "Next Permutation: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
