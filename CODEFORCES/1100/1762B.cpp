#include <bits/stdc++.h>

using namespace std;


int f(int i){
    int cur = 1;
    while(cur <= i){
        cur *= 2;
    }
    return cur - i;
}
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;

        cout << n << endl;
        
        for(int i = 0; i < n; i++){
            int t;
            cin >> t;
            cout << i + 1 << " " << f(t) << endl;
        }

    }
}