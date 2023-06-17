#include<bits/stdc++.h>
using namespace std;
int sz = 26;
 
void solve(){
    string s;
    cin >> s;
    int m = 0, n = (int)s.size();
    vector<bool>prev(sz, false);
    for(auto &i : s){
        if(prev[i - 'a']){
            m += 2;
            for(int j = 0; j < sz; j++) prev[j] = false;
        }
        else prev[i - 'a'] = true;
    }
 
    cout << n - m << endl;
}
 
int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}