#include <iostream>
using namespace std;

double pow(double x, int n) {  // return type should be double
    double ans = 1.0;
    long long nn = n;
    if (nn < 0) nn = -nn;

    while (nn) {
        if (nn % 2) {          // odd power
            ans = ans * x;
            nn--;
        } else {               // even power
            x = x * x;
            nn /= 2;
        }
    }

    if (n < 0) ans = 1.0 / ans;
    return ans;
}

int main() {
    double base;
    int power;
    cin >> base >> power;

    double ans = pow(base, power);
    cout<<"I am Yash ";
    cout << ans;
    return 0;
}
