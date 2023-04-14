#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int T; cin >> T;
    while(T--){
        ll n,m; cin >> n >> m;
        vector<ll> a(n+m);
        for(ll i = 0; i < n+m; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end()-1);
        reverse(a.begin(), a.end());
        ll ans = 0;
        for(int i = 0; i < n; i++){
            ans+=a[i];
        }

        cout << ans << endl;


    }
}