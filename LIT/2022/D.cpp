#include <bits/stdc++.h>

#define ALL(x) (x).begin(),(x).end()
#define SC(t) static_cast<t>
#define int long long

using namespace std;

signed main() {
    int n; cin>>n;
    vector<int> xs(n), hs(n);
    for (int i = 0; i < n; ++i) {
        cin>>xs[i]>>hs[i];
    }
    vector<int> ys(n), ss(n); // last x knocked over
    vector<vector<int>> to(n);
    for (int i = n-1; i >= 0; --i) {
        ys[i] = xs[i];
        ss[i] = 1;
        while (true) {
            auto it = upper_bound(ALL(xs),ys[i]);
            int j = SC(int)(it-xs.begin());
            if (j == n || xs[j] > xs[i] + hs[i]) break;
            to[i].push_back(j);
            ys[i] = ys[j];
            ss[i] += ss[j];
        }
    }
    for (auto s : ss) {
        cout << s << " ";
    }
}