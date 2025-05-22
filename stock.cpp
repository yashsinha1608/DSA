#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int prices[100];  // since 2 ≤ n ≤ 100
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < n; ++i) {
        int profit = prices[i] - minPrice;
        if (profit > maxProfit) {
            maxProfit = profit;
        }
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }
    }

    if (maxProfit >= 2) {
        cout << maxProfit << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
