#include <bits/stdc++.h>

using namespace std;
int main() {
  int t, n, k;
  string s, p;
  cin >> t;
  while (t--) {
    bool ans = true;
    cin >> n >> k >> s >> p;
    for (int i = 0; i < n; i++)
      if (s[i] != p[i] && i < k && i + k >= n)
        ans = false;
    sort(s.begin(), s.end());
    sort(p.begin(), p.end());
    cout << (s != p || !ans ? "NO" : "YES") << endl;
  }
}