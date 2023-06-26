#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, fav;
        cin >> n >> fav;
        vector<int> a(n), b(n), c(n);
        long long in = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> c[i];
        }

        for (int i = 0; i < n; i++) {
            if ((a[i] & fav) == a[i]) {
                in |= a[i];
            } else {
                break;
            }
        }

        for (int i = 0; i < n; i++) {
            if ((b[i] & fav) == b[i]) {
                in |= b[i];
            } else {
                break;
            }
        }

        for (int i = 0; i < n; i++) {
            if ((c[i] & fav) == c[i]) {
                in |= c[i];
            } else {
                break;
            }
        }

        if (in == fav) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
