#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    
    while(T--){
        string s; cin >> s;
        string res;
        char mx = s[0];
        for (int i = 1; i < s.length(); i++)
            mx = max(mx, s[i]);
        for (int i = 0; i < s.length(); i++)
            if (s[i] == mx)
                res += s[i];
    
        cout << res << endl;
    
    }
}