
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;

    cout << "Enter number of days: ";
    cin >> n;

    vector<int> prices(n);

    cout << "Enter stock prices: ";
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++) {

        // Calculate profit if sold today
        int profit = prices[i] - minPrice;

        // Update maximum profit
        maxProfit = max(maxProfit, profit);

        // Update minimum buying price
        minPrice = min(minPrice, prices[i]);
    }

    cout << "Maximum Profit: " << maxProfit << endl;

    return 0;
}
