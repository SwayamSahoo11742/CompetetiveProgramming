#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int main() {

    int n;
    cin >> n;

    vector<long long> a(n), b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    for(int i = 0; i < n; i++){
        a[i] *= (i+1) * (n-i);
    }
    long long ans = 0;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<>());
    for(int i = 0; i < n; i++){
        ans += a[i]*b[i];
    }
    cout << ans << endl;

}