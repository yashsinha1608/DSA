#include <iostream>
#include <iomanip>  
using namespace std;

int main() {
    int n;
    cin >> n;

    int totalNumbers = 0;
    if (n > 10) {
        cout << "Abhik’s marathon journey intensifies! Let’s see his detailed zig-zag progress:\n\n";
    }

    int maxWidth = n; 

    for (int day = 1; day <= n; ++day) {
        int numCount = day;

        int spaces = (maxWidth - numCount) * 4 / 2; 

        cout << setw(spaces + 1) << ""; 

        if (day % 2 == 1) {
            
            for (int i = 1; i <= day; ++i) {
                cout << i;
                if (i != day) cout << "   "; 
            }
        } else {
            for (int i = day; i >= 1; --i) {
                cout << i;
                if (i != 1) cout << "   "; 
            }
        }

        totalNumbers += day;
        cout << endl;
    }

    cout << "\nTotal numbers printed: " << totalNumbers << endl;

    return 0;
}