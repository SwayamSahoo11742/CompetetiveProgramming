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
    for(int i = 1; i <= x; i++){
        for(int j = 0; j < n; j++){
            if(i - a[j] >= 0){
                dp[i] += dp[i - a[j]];
                dp[i] %= MOD;
            }
        }
    }
    cout << dp[x] << endl;
}