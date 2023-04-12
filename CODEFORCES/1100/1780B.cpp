#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; cin >> T;


    while(T--){
        long long n; cin >> n;
        long long sum = 0;
        vector<long long> a(n);

        for(long long i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }

        long long ans = 1, c = 0;

        for(long long i = 0; i < n - 1; i++){
            sum-= a[i]; c += a[i];
            ans = max(ans, gcd(sum, c));
        }

        cout << ans << endl;

        
    }
}