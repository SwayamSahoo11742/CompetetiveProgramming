#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll T; cin >> T;
    while(T--){
        string ans = "NO";
        ll n, x, p; cin >> n >> x >> p;
        for(ll i = 1; i <= min(p, n*2); i++){
            if((x+i*(i+1)/2)%n==0){
                ans = "YES";
            }
        }
        cout << ans << endl;
    }
}