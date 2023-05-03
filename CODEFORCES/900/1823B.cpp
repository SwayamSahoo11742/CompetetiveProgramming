#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n, k; cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int ans = 0;
        for(int i = 0; i < n; i++){
            if(abs(a[i] - 1 - i) % k != 0){
                ans++;
            }

            if(ans > 2){
                ans = -1;
                break;
            }
        }

        if(ans == 2){
            ans = 1;
        }

        cout << ans << endl;
    }
}