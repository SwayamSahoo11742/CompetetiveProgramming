#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n,m; cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        for(int i = 0; i < n; i++){
            string s;cin >> s;
            for(int j = 0; j < m; j++){
                a[i][j] = s[j] - '0';
            }
        }
        int ans = 1;
        for(int i = 1; i < n; i++){
            for(int j = 0; j < m-1; j++){
                int cnt = 0;

                if(a[i][j])
                    cnt++;
                if(a[i-1][j])
                    cnt++;
                if(a[i][j+1])
                    cnt++;
                if(a[i-1][j+1])
                    cnt++;
                
                if(cnt == 3){
                    ans = 0;
                    break;
                }
            }
            if(!ans){
                break;
            }
        }

        cout << (ans? "YES":"NO") << endl;
    }
}