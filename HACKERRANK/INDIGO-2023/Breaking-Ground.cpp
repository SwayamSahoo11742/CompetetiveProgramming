#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, b, x, y;
    cin >> n >> b >> x >> y;

    if (b - ((4 * n - 4) * y) - ((n - 2) * (n - 2) * x) < 0) {
        cout << "Sorry Mr. Fring, no can do" << endl;
    } else {
        cout << "Walter will like this lab" << endl;
    }
    return 0;
}
