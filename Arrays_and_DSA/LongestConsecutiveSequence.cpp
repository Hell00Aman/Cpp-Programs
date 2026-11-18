
#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main() {
    int n;

    cout << "Enter array size: ";
    cin >> n;

    vector<int> arr(n);
    unordered_set<int> st;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        st.insert(arr[i]);
    }

    int longest = 0;

    for (int num : st) {

        // Start counting only from the beginning
        // of a consecutive sequence
        if (st.find(num - 1) == st.end()) {

            int currentNum = num;
            int count = 1;

            // Find consecutive numbers
            while (st.find(currentNum + 1) != st.end()) {
                currentNum++;
                count++;
            }

            longest = max(longest, count);
        }
    }

    cout << "Longest Consecutive Sequence: "
         << longest << endl;

    return 0;
}
