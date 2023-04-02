#include <bits/stdc++.h>

using namespace std;
int main(){
    int T; cin >> T;

    while(T--){
        int n, k; cin >> n >> k;

        int L = 0, R= 55;
        for (int i = 0; i < n; i++){
            int templ, tempr;

            cin >> templ >> tempr;
            
            if (templ <= k && tempr >= k){
                L = max(L, templ);
                R = min(R, tempr);
            }

        }

        if ( L == R){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }


    }
}