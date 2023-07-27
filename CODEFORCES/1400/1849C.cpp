#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n,m;
        cin >> n >> m;
        string s; cin >> s;
        set<pair<int,int>> st;
        for(int i = 0; i < m; i++){
            int l, r; cin >> l >> r;
            r--;l--;
            int x = l, y = r;
            while(s[x]=='0' && x < y+2){
                x++;
            }
            while(s[y]=='1' && y > x-2){
                y--;
            }
            if(x >= y){
                st.insert(make_pair(-1,-1));
                continue;
            }
            st.insert(make_pair(x,y));
        }
        cout << st.size() << endl;
    }
}