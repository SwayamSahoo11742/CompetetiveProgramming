#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n, q; cin >> n >> q;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<>());
        vector<int> pref(n);
        for(int i = 0; i < n; i++){
            pref[i] = (i ? pref[i - 1] : 0) + a[i];
        }
        int max = pref[n];

        while(q--){
            int xj; cin >> xj;
                int l = 1, r = n, ans = -1;
                while(l <= r){
                    int mid = (l+r)/2;
                    if(pref[mid-1] >= xj){
                        ans = mid;
                        r = mid-1;
                    }else{
                        l = mid+1;
                    }
                }

                cout << ans <<  endl;

        }
        
    }
}