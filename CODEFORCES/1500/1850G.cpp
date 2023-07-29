#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        ll ans = 0;
        map<ll,ll> v, h, d1, d2;
        for(ll i = 0; i < n; i++){
            ll x,y; cin >> x >> y;
            v[x]++;
            h[y]++;
            d1[x+y]++;
            d2[x-y]++;
        }
        for(auto [x,y]: v){
            ans += (y*(y-1))/2;
        }
        for(auto [x,y]: h){
            ans += (y*(y-1))/2;
        }
        for(auto [x,y]: d1){
            ans += (y*(y-1))/2;
        }
        for(auto [x,y]: d2){
            ans += (y*(y-1))/2;
        }
        cout << ans * 2 << endl;
    }
}