#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; cin >> T;
    while(T--){
        int n;
        char c;
        string s;
        cin >> n >> c >> s;
        s += s;
        int ans = 0;
        int last = -1;
        for(int i = n*2; i > 0; i--){
            if(s[i] == 'g'){
                last = i;
            }
            if(s[i] == c){
                ans = max(ans, last - i);
            }
        }

        cout << ans << endl;
    }
}