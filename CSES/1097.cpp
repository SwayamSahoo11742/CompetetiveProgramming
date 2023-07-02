#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n; cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }

    vector<vector<ll>> dp(n, vector<ll>(n));
    for(int l = n-1; l >= 0; l--){
        for(int r = l; r < n; r++){
            if(l==r){
                dp[l][r] = a[l];
            }else{
                dp[l][r] = max(a[l] - dp[l+1][r], a[r] - dp[l][r-1]);
            }
        }
    }
    cout << (sum + dp[0][n-1])/2 << endl;
}