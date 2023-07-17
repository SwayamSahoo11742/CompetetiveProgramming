#include <bits/stdc++.h>
using namespace std;
const int MX = 2 * 1e5;
int main(){
    int T; cin >> T;
    while(T--){
        int n, k; cin >> n >> k;
        vector<int> a(n+1);
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        vector<vector<int>> g(n+1);
        vector<int> prevloc(n+1);
        for(int i = 1; i <= n; i++){
            int nm = a[i];
            int tmp = i-prevloc[nm]-1;
            g[nm].push_back(tmp);
            prevloc[nm] = i;
        }
        int mn = MX;
        int ps;
        int dis;
        for (int i = 1; i <=k; i++){
            dis = n-prevloc[i];
            g[i].push_back(dis);
            sort(g[i].begin(), g[i].end(), greater<>());
            if(g[i].size() > 1){
                ps = max(g[i][0]/2, g[i][1]);
            }else{
                ps = g[i][0]/2;
            }
            mn = min(mn, ps);
        }
        cout << mn << endl;
    }

}