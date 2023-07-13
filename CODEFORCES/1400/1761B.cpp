#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<vector<int>> b(n,vector<int>(n));
        for(int i = 0; i < n; i++){
            string s; cin >> s;
            for(int j = 0; j < n; j++){
                b[i][j] = s[j] - '0';
            }
        }
        map<int,set<int>> a;
        for(int i = 1; i <= n; i++){

            set<int> tmp;
            tmp.insert(i);
            a[i] = tmp;

        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(b[i][j]){
                    a[j+1].insert(i+1);
                }
            }
        }

        for(int i = 1; i <= n; i++){
            cout << a[i].size() << " ";
            for (const auto& e : a[i]) {
                cout << e << " ";
            }
            cout << endl;
        }
    }
}