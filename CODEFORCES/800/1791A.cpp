#include <bits/stdc++.h>

using namespace std;
string CODEFORCES = "codeforces";

int main(){
    int T; cin >> T;

    while(T--){
        char m; cin >> m;
        if (count(CODEFORCES.begin(), CODEFORCES.end(), m)){
            cout << "YES" << endl;
            continue;
        }

        cout << "NO" << endl;
    }

}