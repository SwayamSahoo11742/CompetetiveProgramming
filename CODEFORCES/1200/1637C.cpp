#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<int> a(n), odds;
        long long even = 0, un = 0;
        for(int i = 0; i < n; i++){
            cin >>a[i];
        }
        if (*max_element(a.begin() + 1, a.end() - 1) == 1 || (n == 3 && a[1] % 2 == 1)) {
            cout << -1 << endl;
            continue;
        }   
        long long ans = 0;
        for(int i  = 1; i < n-1; i++){
            ans += (a[i]+1)/2;
        }
        cout << ans << endl;

    }
}