#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n;cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int mx = INT_MAX, mn = 0;
        for(int i =0; i < n-1; i++){
            int a1 = a[i], a2 = a[i+1];
            int ml = (a1+a2)/2;
            int mr = (a1+a2+1)/2;
            if(a1 < a2){
                mx = min(mx,ml);
            }

            if(a1 > a2){
                mn = max(mn, mr);
            }
        }
        if(mn <= mx){
            cout << mn<< endl;
        }else{
            cout << -1 << endl;
        }
    }
}