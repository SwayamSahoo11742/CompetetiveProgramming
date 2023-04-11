#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        if (gcd(a, b) == 1) {
            cout << "1\n" << a << " " << b << "\n";
        } else {

            cout << "2\n" << 1 << " " << b - 1 << "\n" << a << " " << b << "\n";
        }
    }
    return 0;
}
