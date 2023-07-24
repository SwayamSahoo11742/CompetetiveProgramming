#include <bits/stdc++.h>
using namespace std;
const int LIM = 36;
int main(){
    int T; cin >> T;
    while(T--){
        int n, k; cin >> n >> k;
        if(k-2>LIM-1){
            cout << 0 << endl;
            continue;
        }
        int ans = 0;
        vector<int> a(LIM);
        a[0] = 1;
        a[1] = 1;
        for(int i = 2; i < LIM; i++){
            a[i] = a[i-1]+a[i-2];
        }
        int n1 = a[k-3], n2 = a[k-2];
        for(int i = 0; i <=n; i++){
            int val = n-n2*i;
            if(val>=0 && val%n1==0){
                if(i>= val/n1){
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
}