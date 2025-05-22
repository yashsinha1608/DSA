#include <iostream>
using namespace std;

int countSegments(const string& log) {
    int segments = 0;
    int n = log.length();

    for (int i = 0; i < n; ++i) {
        if (log[i] == '1' && (i == 0 || log[i - 1] == '0')) {
            segments++;
        }
    }

    return segments;
}

int main() {
    string log;
    cin >> log;

    int result = countSegments(log);
    cout << result << endl;

    return 0;
}
