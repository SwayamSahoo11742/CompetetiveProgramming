#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        int r = n*3, l = 1;

        if(n == 1){
            cout << 1 << endl;
            cout << 1 << " " << 2 << endl;
            continue;
        }

        
        cout << n/2 + n % 2 << endl;
        while(l<r){
            cout << r << " " << l << endl;;
            l += 3;
            r -= 3;
        }
    }
}