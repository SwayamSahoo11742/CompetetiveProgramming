#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; cin >> T;

    while(T--){
        int n, m; cin >> n >> m;
        string t, s;

        cin >> t >> s;

        reverse(s.begin(), s.end());
        t += s;

        int c = 0;
        for(int i = 0; i < t.length() - 1; i++){
            if (t[i] == t[i + 1]){
                c++;
            }
        }

        if (c <= 1){
            cout << "YES" << endl;

        }
        else{
            cout << "NO" << endl;
        }

    }
}