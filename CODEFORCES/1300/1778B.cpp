#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n, m, d; cin >> n >> m >> d;
        vector<int> a(n), b(m);
        map<int,int> mp;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]] = i;
        }
        for(int i = 0; i < m; i++){
            cin >> b[i];
        }
        int ans = INT_MAX;
        for(int i = 0; i < m-1; i++){
            if(mp[b[i]] < mp[b[i+1]] && mp[b[i+1]] <= mp[b[i]]+d){
                int sp = d - (abs(mp[b[i]]-mp[b[i+1]])-1);
                if(mp[b[i]]+(n-mp[b[i+1]]-1) < sp){
                    sp = INT_MAX;
                }
                int cr = abs(mp[b[i]]-mp[b[i+1]]);
                ans = min(ans,min(cr,sp));
            }else{
                ans = 0; break;
            }
        }
        cout << ans << endl;
    }
}