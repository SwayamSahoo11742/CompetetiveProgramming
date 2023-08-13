#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while (t--) {
    string x;
    cin >> x;
    int k;
    cin >> k;
    int n = x.size();
    vector<vector<int>> pos(10);
    for (int i = 0; i < n; ++i)
      pos[x[i] - '0'].push_back(i);
    for (int i = 0; i < 10; ++i)
      reverse(pos[i].begin(), pos[i].end());
    string ans;
    int lst = 0, len = n - k;
    for (int i = 0; i < len; ++i) {
      for (int d = (i == 0); d <= 9; ++d) {
        while (!pos[d].empty() && pos[d].back() < lst)
          pos[d].pop_back();
        if (!pos[d].empty() && pos[d].back() - lst <= k) {
          ans += d + '0';
          k -= pos[d].back() - lst;
          lst = pos[d].back() + 1;
          break;
        }
      }
    }
    cout << ans << '\n';
  }
}
 