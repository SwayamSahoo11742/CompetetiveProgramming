#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


int main(){
    int T; cin >> T;

    while(T--){
        ll n, c; cin >> n >> c;

        vector<ll> cost(n);

        for(int i = 0; i < n; i++){
            ll x; cin >> x;
            cost[i] = x + i + 1;
        }

        sort(cost.begin(),cost.end(), greater<int>());

        ll ans = 0;
        while(!cost.empty()){
            ll l = cost[cost.size() - 1];cost.pop_back();
            if (c < l){
                break;
            }

            c -= l;
            ans++;
        }

        cout << ans << endl;
    }
}