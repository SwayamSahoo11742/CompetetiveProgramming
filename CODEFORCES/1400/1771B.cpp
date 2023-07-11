#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int T; cin >> T;
    while(T--){
        ll n, m; cin >> n >> m;
        map<ll,ll> mp;
        for(int i = 1;i <= n; i++){
            mp[i] = n;
        }
        for(int i = 0; i < m; i++){
            ll x, y; cin >> x >> y;
            if(x > y){
                swap(x,y);
            }
            mp[x]=min(mp[x],y-1);
        }
        ll ans = n;
        for(int i = n-1; i >= 1; i--){
            mp[i] = min(mp[i], mp[i+1]);
        }
        for(int i = 0; i < n; i++){
            ans += mp[i]-i;
        }
        cout << ans << endl;
    }
}