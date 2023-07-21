#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n,k; cin >> n >> k;
        vector<int> a(n), ab;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for(int i = 1; i < n; i++){
            ab.push_back(abs(a[i] - a[i-1]));
        }
        int mx = -1;
        int ct = 1;
        for(int i = 0; i < ab.size(); i++){
            if(ab[i] <= k){
                ct++;
            }else{
                mx = max(mx, ct);
                ct = 1;
            }
        }
        mx = max(mx,ct);
        cout << n-mx << endl;
    }
}