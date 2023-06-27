#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9+7;
int main(){
    int T; cin>> T;
    while(T--){
        int n; cin >> n;
        vector<int> a(n), b(n);
        map<int,int> m;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            m[a[i]] = i;
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        int tot = 1;
        set<int>s;
        for(int i = 0; i < n; i++){
            s.insert(i);
        }
        while(!s.empty()){
            vector<int>sv;
            for(int x: s){
                sv.push_back(x);
                int y = m[b[x]];
                while(y!=x){
                    sv.push_back(y);
                    y = m[b[y]];
                }
                break;
            }
            for(int x : sv){
                s.erase(x);
            }
            tot *= 2;
            tot %= MOD;
        }
        cout << tot << endl;
    }
}