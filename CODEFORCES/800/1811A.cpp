#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){
    int T; cin >> T;

    while(T--){
        int n; cin >> n;
        int d; cin >>d;
        string s; cin >> s;

        if (d == 0){
            cout << s << 0 << endl;
            continue;
        }

        for(auto i: s){
            if (i-'0' < d && d > -1){
                cout << d;
                d = -1;
            }

            cout << i;
        }

        if (d != -1){
            cout << d;
        }
        cout << endl;
    }
}