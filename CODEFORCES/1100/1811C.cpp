#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){
    int T; cin >> T;

    while(T--){
        ll n; cin >> n;
        vector<ll> a;
        vector<ll> b(n - 1); for(int i = 0; i < n - 1; i++){cin >> b[i];}
        a.push_back(b[0]);
        for(int i = 0; i < n - 2; i++){
            a.push_back(min(b[i], b[i+1]));
        }
        a.push_back(b[b.size() - 1]);

        for(ll i : a){
            cout << i << " ";
        }
        cout << endl;
    }
}