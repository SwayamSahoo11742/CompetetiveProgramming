#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    ll n, ans = 0; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
            cin >> a[i];
    }
    if(n==1){
        return 0;
    }else{
        for(int j = 0; j < 2; j++){
            for(int i = 1;i < n-1; i++){
                if(a[i] > a[i-1]){
                    ll sub = a[i]-a[i-1];
                    a[i] -= sub;
                    a[i+1] -= sub;
                    ans += sub*2;
                }
            }
            if(a[n-1]> a[n-2]){
                return -1;
            }
            reverse(a.begin(), a.end());
        }
        if(a[0] < 0){
            return -1;
        }else{
            return ans;
        }
    }
}
int main(){
    int T; cin >> T;
    while(T--){
        cout << solve() << endl;
    }
}