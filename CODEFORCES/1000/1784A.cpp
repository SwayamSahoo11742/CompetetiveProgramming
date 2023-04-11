#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll T; cin >> T;

    while (T--) {
        ll n; cin >> n;

        ll a[200005];
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        sort(a+1, a+n+1);
        ll ans = 0;
        for(int i = 1; i <=n; i++){
            if(a[i] <= a[i-1]+1){
                continue;
            }
            ans+= a[i]-a[i-1]-1;
            a[i] = a[i-1] + 1;

        }

        cout << ans << endl;
}
}