#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int T; cin >> T;
    while(T--){
        ll n; cin >> n;
        vector<ll> a(n);
        a[0] = 2;
        a[n-1] = 3;
        a[n/2]=1;
        int ans = 4;
        for(int i = 1; i < n-1;i++){
            if(i==n/2){
                continue;
            }
            a[i] = ans;
            ans++;
            
        }
        for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }cout << endl;
    }
}