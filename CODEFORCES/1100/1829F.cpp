#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n, m,x,y; cin >> n >> m;
        map<int, vector<int>> mp;
        for(int i = 0; i < m ; i++){
            int u, v; cin >> u >> v;
            mp[u].push_back(v);
            mp[v].push_back(u);
        }
        for(auto& p : mp){
            if(p.second.size() == 1){
                y = mp[p.second[0]].size() - 1;
                for(int i : mp[p.second[0]]){
                    if(mp[i].size() != 1){
                        x = mp[i].size();
                        break;
                    }
                }
                break;
            }
        }

        cout << x << " " << y << endl;
    }
}