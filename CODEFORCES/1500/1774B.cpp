#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        long long n, m, k; cin >> n >> m >> k;
        vector<long long> a(m);
        for(int i = 0; i < m; i++){
            cin >> a[i];
        }
        int fl = 0;
        string ans = "YES";
        if(k == 1){
            cout << ans << endl;
            continue;
        }
        for(int i = 0; i < m; i++){
            if (a[i] == (n + k - 1) / k) ++fl;
            if (a[i] > (n + k - 1) / k) fl = 1 << 30;
        }
        cout <<  (fl <= (n - 1) % k + 1 ? "YES" : "NO") << endl;
    }
}