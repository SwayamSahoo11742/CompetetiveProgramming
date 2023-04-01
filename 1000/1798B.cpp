#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; cin >> T;

    while(T--){
        int m; cin >> m;
        map<int,int> mp, ans;
        for(int i = 1; i <= m; i++){
            int n; cin >> n;
            while(n--){
                int t; cin >> t;
                mp[t] = i;
            }

        }

        for(auto i: mp){
            ans[i.second] = i.first;
            if(ans.size() < m){cout << -1 << endl; break;}
            else{
                for(auto it: ans){
                    cout << it.second << " ";

                }
                cout << endl;
            }
        }




        
    }
}