#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        int m; cin >> m;

        vector<vector<int>> bd(n, vector<int> (m));
        for (int i = 0; i < n; ++i) {
            string s;
            cin >> s;
            for (int j = 0; j < m; ++j)
                bd[i][j] = s[j] - '0';
        }
        if(bd[0][0] == 1){
            cout << -1 << endl;
            continue;
        }

        vector<vector<int>> ans;

        for(int j = m-1; j >= 0; j--){
            for(int i = n-1; i >= 0; i--){
               if(bd[i][j]){
                if(i != 0){
                    ans.push_back({i,j+1, i + 1, j+1});
                }else{
                    ans.push_back({i+1,j, i+1, j+1});
                }
               } 
            }
        }

        cout << ans.size() << endl;
        for (auto i : ans) {
            cout << i[0] << ' ' << i[1] << ' ' << i[2] << ' ' << i[3] << '\n';
        }

    }
}