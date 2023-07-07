#include <bits/stdc++.h>

using namespace std;
int main() {
    int T; cin >> T;
    while(T--){
        int n, k; cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        vector<int> dif;
        for(int i = 1;i<n;i++){
            dif.push_back(abs(a[i]-a[i-1]));
        }
        sort(dif.begin(), dif.end(), greater<>());
        int ans = 0;
        for(int i = k-1; i< dif.size(); i++){
            ans += dif[i];
        }
        cout << ans << endl;

        
    }
}
