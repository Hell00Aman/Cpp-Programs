
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n;

    cout << "Enter rows and columns: ";
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));

    cout << "Enter matrix elements: ";

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int top = 0;
    int bottom = m - 1;
    int left = 0;
    int right = n - 1;

    cout << "Spiral Order: ";

    while (top <= bottom && left <= right) {

        // Traverse left to right
        for (int i = left; i <= right; i++)
            cout << matrix[top][i] << " ";
        top++;

        // Traverse top to bottom
        for (int i = top; i <= bottom; i++)
            cout << matrix[i][right] << " ";
        right--;

        // Traverse right to left
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                cout << matrix[bottom][i] << " ";
            bottom--;
        }

        // Traverse bottom to top
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                cout << matrix[i][left] << " ";
            left++;
        }
    }

    cout << endl;

    return 0;
}
