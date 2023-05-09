#include <bits/stdc++.h>
using namespace std;
string const CF = "codeforces";
int main(){
    int T; cin >> T;
    while(T--){
        string s; cin >> s;
        int ans = 0;

        for(int i = 0; i < 10; i++){
            if(s[i] != CF[i]){
                ans++;
            }
        }

        cout << ans << endl;
    }
}