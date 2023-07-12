#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<ll> a(n);
        ll mx = LLONG_MIN;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            mx = max(mx, a[i]);
        }
        if(mx <= 0){
            cout << mx << endl;
            continue;
        }
        ll sum = 0;
        ll a1 = mx;
        for(int i = 0; i < n; i+=2){
            if(a[i] >= 0){
                sum += a[i];
            }
        }
        a1 = max(a1, sum);
        sum = 0;
        for(int i = 1; i < n; i+=2){
            if(a[i] >= 0){
                sum+=a[i];
            }
        }
        cout << max(a1, sum) << endl;

    }
}