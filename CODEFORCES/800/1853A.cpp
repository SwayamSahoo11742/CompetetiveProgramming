#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0;i < n; i++){
            cin >> a[i];
        }
        vector<int> sa(a.begin(), a.end());
        sort(sa.begin(), sa.end());
        if(sa == a){
            int ans = INT_MAX;
            for(int i = 1; i < n; i++){
                int tmp =  ceil((a[i]-a[i-1])/2);
                ans = min(ans,tmp);
            }
            cout << ans+1 << endl;
        }else{
            cout << 0 << endl;
        }
    }
}