#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<int> a(n);
        map<int, int> l;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            l[a[i]]++;
        }
        int mx = *max_element(a.begin(), a.end());
        if(l[0] == 0){
            cout << "NO" << endl;
            continue;
        }
        string ans = "YES";
        for(int i = 1; i <= mx; i++){
            if(l[i] > l[i-1]){
                ans = "NO";
                break;
            }

            if(l[i] == 0){
                ans = "NO";
                break;
            }
        }
        cout << ans << endl;
        

    }
}