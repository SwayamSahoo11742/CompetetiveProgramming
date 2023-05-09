#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<int> a(n);
        int ans = -1;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            
            if(a[i] != i){
                if(ans == -1){
                    ans = a[i];
                }

                ans &= a[i];
            }
        }

        cout << ans << endl;




    }
}