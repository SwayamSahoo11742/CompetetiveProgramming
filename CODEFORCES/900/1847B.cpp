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

        int an = a[0];
        for(int i = 1; i < n; i++){
            an &= a[i];
        }
        if(an != 0){
            cout << 1 << endl;
        }else{
            int ans = 0;
            int tmp = a[0];
            for(int i = 1; i < n; i++){
                if(tmp == an){
                    ans++;
                    tmp = a[i];
                }else{
                    tmp&=a[i];
                }
            }
            if(tmp == 0){
                ans ++;
            }
            cout << ans << endl;
        }




    }
}