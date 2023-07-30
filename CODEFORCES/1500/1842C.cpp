#include <bits/stdc++.h>
using namespace std;
const int MX = 2 * (1e5)+5;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<int> a(n+1);
        for(int i = 1; i <=n; i++){
            cin >> a[i];
        }
        vector<int> grp(MX, INT_MAX);
        vector<int> dp(MX);
        dp[0] = 0;
        for(int i = 1; i <= n; i++){
            dp[i] = min(dp[i-1]+1, grp[a[i]]);
            grp[a[i]] = min(dp[i-1],grp[a[i]]);
        }
        cout << n-dp[n]<<endl;

    }
}