#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int T; cin >> T;
    while(T--){
        int n,x; cin >> n >> x;
        map<ll,ll> m;
        vector<ll> a(n); 
        for(int i = 0; i < n; i++){
            cin >> a[i];
            m[a[i]]++;
        }
        long long ans = 0;
        for(auto [i,j]: m){
            if(j){
                while(m[i]){
                    if(m[i*x]){
                        m[i*x]--;
                        m[i]--;
                    }else if(!i%x && m[i/x]){
                        m[i/x]--;
                        m[i]--;
                    }else{
                        break;
                    }
                }
            }
        }
        for(auto [a,j] : m){
            ans += j;
        }
        cout << ans << endl;
    }
}