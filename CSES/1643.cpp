#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin >> n;
    vector<long long> a(n);
    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<long long> sm;
    sm.push_back(0);
    for(long long i = 1; i < n+1; i++){
        sm.push_back(sm[i-1] + a[i-1]);
    }
    long long ans = LLONG_MIN;
    long long mn = LLONG_MAX;
 
    for(long long i = 0; i < n+1; i++){
        if(sm[i] < mn){
            mn = sm[i];
        }
        ans = max(ans, abs(sm[i] - mn));
    }
 
    cout << ans << endl;
 
}