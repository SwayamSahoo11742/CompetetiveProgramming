#include <bits/stdc++.h>

using namespace std;

#define sz(v) (int)v.size()
#define all(v) v.begin(),v.end()
#define eb emplace_back

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    string t; cin >> t;
    vector<int> cnt(26, 0);

    bool ok = true;
    for (int i = 0; i < n; ++i) {
        if (i >= k || i+k < n){
            cnt[s[i] - 'a']++;
            cnt[t[i] - 'a']--;
        } else {
            ok &= s[i] == t[i];
        }
    }

    cout << (ok && count(all(cnt), 0) == 26 ? "YES" : "NO") << '\n';
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}