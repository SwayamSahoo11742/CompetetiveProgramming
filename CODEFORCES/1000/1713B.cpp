#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

int n, a[N];

int main() {
    int tc;
    for (cin >> tc; tc--; ) {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        int preLen = 1;
        while (preLen < n && a[preLen] <= a[preLen + 1])
            preLen++;

        int sufLen = 1;
        while (sufLen < n && a[n-sufLen] >= a[n-sufLen + 1])
            sufLen++;

        if (preLen + sufLen >= n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}