#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
int main(){
    int n,x;
    cin >> n >> x;
    vector<int>a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<long long> dp(x+1);
    dp[0] = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= x; j++){
            if(j - a[i] >= 0){
                dp[j] += dp[j - a[i]];
                dp[j] %= MOD;
            }
        }
    }
    cout << dp[x] << endl;
}