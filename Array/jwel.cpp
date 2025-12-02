#include <iostream>
#include <unordered_set>
using namespace std;

int countJewelsInStones(string jewels, string stones) {
    unordered_set<char> jewelSet(jewels.begin(), jewels.end());
    int count = 0;
    for (char stone : stones) {
        if (jewelSet.count(stone)) {
            count++;
        }
    }
    return count;
}

int main() {
    string jewels, stones;
    cin >> jewels >> stones;

    int result = countJewelsInStones(jewels, stones);
    cout << result << endl;

    return 0;
}