#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int total_students = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i + j) % 2 == 0) {
                cout << "1";
                total_students++;
            } else {
                cout << "0";
            }

            if (j < n - 1) cout << " ";
        }
        cout << endl;
    }

    cout << "Total students seated: " << total_students << endl;

    return 0;
}