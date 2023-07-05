#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int T; cin >> T;
    while(T--){
        ll n, m; cin >> n >> m;
        vector<ll> k(n);
        for(int i = 0; i < n; i++){
            cin >> k[i];
        }
        sort(k.begin(),k.end());

        for(int i = 0; i < m; i++){
            ll a,b,c; cin >> a >> b >> c;
            ll idx = lower_bound(k.begin(),k.end(),b)-k.begin();

            if(idx < n && (k[idx] - b)*(k[idx]-b) < 4*a*c){
                cout << "YES" << endl;
                cout << k[idx] << endl;
                continue;
            }
            if(idx > 0 && (k[idx-1]-b)*(k[idx-1]-b)<4*a*c){
                cout << "YES" << endl;
                cout << k[idx-1] << endl;
                continue;
            }
            cout << "NO" << endl;
            
        }
    }
}