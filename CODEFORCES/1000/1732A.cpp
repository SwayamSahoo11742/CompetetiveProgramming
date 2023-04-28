#include <bits/stdc++.h>
using namespace std;

int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int g = a[0];
        for(int i = 1; i < n; i++){
            g = gcd(g, a[i]);
        }
        if(g == 1){
            cout << 0 << endl;
            continue;
        }

        if(gcd(g, n) == 1){
            cout << 1 << endl;
            continue;
        }

        if(gcd(g,n-1)== 1){
            cout << 2 << endl;
            continue;
        }

        cout << 3 << endl;
    }
}