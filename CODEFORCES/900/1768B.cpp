#include <bits/stdc++.h>
using namespace std;

int main(){
    int T; cin >> T;

    while(T--){
        int n,k,c=0; cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        for(int i = 0; i < n; i++){
            if(a[i] == c+1){
                c++;
            }
        }

        int ans = n-c;
        if(ans % k == 0){
            ans = ans/k;
        }else{
            ans = ans/k+1;
        }

        cout << ans << endl;
    }
}