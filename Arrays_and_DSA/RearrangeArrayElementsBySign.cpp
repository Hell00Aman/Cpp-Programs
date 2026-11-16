
#include <iostream>
#include <vector>
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

    vector<int> result(n);

    int posIndex = 0;
    int negIndex = 1;

    // Place positive and negative numbers alternately
    for (int i = 0; i < n; i++) {

        if (arr[i] > 0) {
            result[posIndex] = arr[i];
            posIndex += 2;
        }
        else {
            result[negIndex] = arr[i];
            negIndex += 2;
        }
    }

    cout << "Rearranged Array: ";

    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    cout << endl;

    return 0;
}
