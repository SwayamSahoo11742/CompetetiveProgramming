#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        string s; cin >> s;
        int n = s.size(), t1 = 0, t2 = 0;
        string ans = "";
        for(int i = 0; i < n; i++){
            ans.push_back('(');
            ans.push_back(')');
        }
        if(ans.find(s) != string::npos){
            ans = "";
            for(int i = 0; i < n; i++){
                ans.push_back('(');
            }
            for(int i = 0; i < n; i++){
                ans.push_back(')');
            }
            if(ans.find(s) != string::npos){
                cout << "NO" << endl;
            }else{
                cout << "YES" << endl;
                cout << ans << endl;
            }
        }else{
            cout << "YES" << endl;
            cout << ans << endl;
        }
    }
}