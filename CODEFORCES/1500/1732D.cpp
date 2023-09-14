#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int T; cin >> T;
    map<ll,ll> a, pos;
    a[0] = 1;
    while(T--){
        string s; cin >> s;
        ll x; cin >> x;
        if(s == "+"){
            a[x] = 1;
        }else{
            while(a[pos[x]]){
                pos[x] += x;
            }
            cout << pos[x] << endl;
        }
    }
}