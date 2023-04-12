#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int T; cin >> T;

    while(T--){
        int n; cin >> n;
        int ct1 = 0;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i]==1){
                ct1++;
            }
        }
        if(ct1 ==n){
            cout << 2 << endl;
            continue;
        }
        vector<int> b;

        sort(a.begin(), a.end());
        int ans = 0;
        for(int i = 0; i <= n; i++){
            if (i == 0 || a[i - 1] < i){
                if(i == n || a[i] > i){
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }
}