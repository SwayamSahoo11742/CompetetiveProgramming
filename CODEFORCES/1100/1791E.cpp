#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int T; cin >> T;

    while(T--){
        ll n,sum=0; cin >> n;
        vector<ll> a(n);
        ll nct = 0;
        for (int i= 0; i < n; i++){
            cin >> a[i];
            if (a[i] < 0){
                nct++;
                a[i] = -a[i];
            }

            sum += a[i];
        }   

        sort(a.begin(), a.end());
        if (nct % 2 ==1){
            sum -= 2 * a[0];
        }
        

        cout << sum << '\n';
    }
}