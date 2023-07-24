#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k; cin >> n >> k;
    vector<int> a(n); 
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<long long> dp(k+1, INT_MAX);
    dp[0] = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= k; j++){
            if(j - a[i-1] >= 0){
                dp[j]  = min(dp[j], dp[j - a[i-1]]+1);
            }
        }
    }
    cout << (dp[k]==INT_MAX?-1:dp[k]) << endl;
}