#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        int ans = 0;
        int aq = -1;
        for(int i = 0; i < n; i++){
            int w,q; cin >> w >> q;
            if(w <= 10){
                if(q > aq){
                    aq = q;
                    ans = i+1;
                }
            }
        }
        cout << ans << endl;
    }
}