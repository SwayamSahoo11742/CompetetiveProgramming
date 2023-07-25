#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n, k; cin >> n >> k;
        vector<int> a(n);
        int lst, fst;
        int fcnt = 0, lcnt = 0;
        int fidx = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(i==0){
                fst = a[i];
            }
            if(i==n-1){
                lst = a[i];
            }
        }
        for(int i = 0; i < n; i++){
            if(a[i] == fst){
                fcnt++;
            }
            if(fcnt == k){
                fidx = i;
                break;
            }
        }
        if(fcnt == k && fst==lst){
            cout << "YES" << endl;
            continue;
        }
        if(fcnt != k){
            cout << "NO" << endl;
            continue;
        }
        for(int i = fidx; i < n; i++){
            if(a[i] == lst){
                lcnt++;
            }
        }
        if(lcnt >= k){
            cout <<"YES"<<endl;
        }else{
            cout <<"NO" << endl;
        }
    }
}