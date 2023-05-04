#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        map<string, bool> m;
        int n; cin >> n;
        vector<string> s(n);
        for(int i = 0; i < n; i++){
            cin >> s[i];
            m[s[i]] = true;
        }

        for(int i = 0; i < n; i++){
            int ans = 0;
            for(int j = 0; j < s[i].length(); j++){
                string prefix = s[i].substr(0,j), suffix = s[i].substr(j, s[i].length() - j);
                if(m[prefix] && m[suffix]){
                    ans = 1;
                    continue;
                }
            }

            cout << ans;
        }

        cout << endl;

        
    } 
}