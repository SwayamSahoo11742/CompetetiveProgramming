#include <bits/stdc++.h>  
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n,m,k,H; cin >> n >> m >> k >> H;
        vector<int> a(n);
        int ans = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            int dif = abs(a[i] - H);
            if(dif%k == 0 && a[i] != H){
                if(dif/k < m){
                    ans++;
                }
            }
        }
        cout << ans << endl;


    }
}