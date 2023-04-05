#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; cin >> T;
    
    while(T--){
        int n; cin >> n;
        string s; cin >> s;
        vector<int> pre(n, 0), suf(n, 0);
        set<char> se;
        for(int i = 0; i < n; i ++){
            se.insert(s[i]);
            pre[i] = se.size();
        }
        se.clear();

        for(int i = n - 1; i >= 0; i--){
            se.insert(s[i]);
            suf[i] = se.size();
        }

        int max_ = 0, m;
        for(int i = 0; i < n - 1; i++){
            m = pre[i] + suf[i + 1];

            max_ = max(max_, m);
        }

        cout << max_<< endl;
    }
    
}