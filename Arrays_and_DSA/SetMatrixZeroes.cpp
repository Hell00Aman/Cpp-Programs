
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

    bool firstRowZero = false;
    bool firstColZero = false;

    // Check first row
    for (int j = 0; j < n; j++) {
        if (matrix[0][j] == 0)
            firstRowZero = true;
    }

    // Check first column
    for (int i = 0; i < m; i++) {
        if (matrix[i][0] == 0)
            firstColZero = true;
    }

    // Use first row and column as markers
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    // Set marked rows to zero
    for (int i = 1; i < m; i++) {
        if (matrix[i][0] == 0) {
            for (int j = 1; j < n; j++)
                matrix[i][j] = 0;
        }
    }

    // Set marked columns to zero
    for (int j = 1; j < n; j++) {
        if (matrix[0][j] == 0) {
            for (int i = 1; i < m; i++)
                matrix[i][j] = 0;
        }
    }

    // Handle first row
    if (firstRowZero) {
        for (int j = 0; j < n; j++)
            matrix[0][j] = 0;
    }

    // Handle first column
    if (firstColZero) {
        for (int i = 0; i < m; i++)
            matrix[i][0] = 0;
    }

    cout << "Modified Matrix:\n";

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cout << matrix[i][j] << " ";

        cout << endl;
    }

    return 0;
}
