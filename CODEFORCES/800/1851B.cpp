#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        string ans = "YES";
        vector<int> sa(a.begin(), a.end());
        sort(sa.begin(), sa.end());
        for(int i = 0; i < n;i++){
            if(a[i] % 2 != sa[i]%2){
                ans = "NO";
                break;
            }
        }
        cout << ans << endl;
    }
}