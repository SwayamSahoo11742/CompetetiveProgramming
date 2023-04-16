#include <bits/stdc++.h>

using namespace std;


int main(){
    int T; cin >> T;
    while(T--){
        string s; cin >> s;
        int n = s.length();
        int ans = 0;

        if(n == 1){
            if(s[0] == '_'){
                cout << 2 << endl;
                continue;
            }
            else{
                cout << 1 << endl;
                continue;
            }
        }
        for(int i = 0; i < n; i++){
            
            if(s[i] == '_' && i == 0){
                ans++;
                continue;
            }

            if(i == n - 1 && s[i] == '_'){
                ans++;
            }

            // if(s[i] == '^' && i != n - 1){
            //     if(s[i+1] != '^' || (s[i+1] != '_' && s[i+2] != '^')){
            //         ans++;
            //     }
            // }
            if(s[i] == '_'){
                if(s[i-1] != '^'){
                    ans++;
                }
            }

            
        }

        cout << ans << endl;

    }
}