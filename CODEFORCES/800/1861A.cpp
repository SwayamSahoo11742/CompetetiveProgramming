#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
            string s; cin >> s;
    string ans = "";
    for(int i = 0; i < 9; i++){
        if(s[i] == '1'){
            ans = "13";
            break;
        }
        if(s[i] == '3'){
            ans = "31";
            break;
        }
    }
    cout << ans << endl;
    }
}