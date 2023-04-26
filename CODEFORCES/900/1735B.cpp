#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<int> a;
        a.resize(n);
        int ans = 0; 
        for(int i = 0; i < n ; i ++){
            cin >> a[i];
            ans += (a[i] - 1) / (2 * a[0] -1);
        }

        cout << ans << endl;
    }
}