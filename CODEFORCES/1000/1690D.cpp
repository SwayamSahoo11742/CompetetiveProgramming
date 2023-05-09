#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n, k; cin >> n >> k;
        string s;
        cin >> s;
        vector<int> pref(n+1);
        for(int i = 1; i <= n; i++){
            pref[i] = pref[i-1] + int(s[i - 1] == 'W');
        }
        int ans = INT_MAX;
        for(int i = k; i <= n; i++){
            ans = min(ans, pref[i] - pref[i-k]);
        }

        cout << ans << endl;
    }
}