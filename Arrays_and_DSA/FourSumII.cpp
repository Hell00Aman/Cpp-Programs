
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> A(n), B(n), C(n), D(n);

    for (int i = 0; i < n; i++)
        cin >> A[i];

    for (int i = 0; i < n; i++)
        cin >> B[i];

    for (int i = 0; i < n; i++)
        cin >> C[i];

    for (int i = 0; i < n; i++)
        cin >> D[i];

    // Store all possible A[i] + B[j] sums
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            freq[A[i] + B[j]]++;
        }
    }

    int count = 0;

    // Find complementary sums from C and D
    for (int k = 0; k < n; k++) {
        for (int l = 0; l < n; l++) {

            int sum = C[k] + D[l];

            // We need A[i] + B[j] = -sum
            count += freq[-sum];
        }
    }

    cout << count << endl;

    return 0;
}
