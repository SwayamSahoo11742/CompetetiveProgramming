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
        
        sort(a.begin(), a.end());
        int lo = a[0], hi = a[n-1];
        int ans = -1;
        for(int i = 0; i < n; i++){
            int f;
            if(abs(lo - a[i]) > abs(hi - a[i])){
                f = lo;
            }else{
                f = hi;
            }
            int c;
            if(i == 0){
                c = a[i+1];
            }else if(i == n-1){
                c = a[i-1];
            }else{
                if(abs(a[i-1] - a[i]) > abs(a[i+1] - a[i])){
                    c = a[i+1];
                }else{
                    c = a[i-1];
                }
            }
            ans = max(ans, abs(a[i] - f) + abs(a[i] - c));
            // cout << "c = " << c << " f = " << f << " ai = " << a[i] << endl;
        }
        cout << ans << endl;

    }
}