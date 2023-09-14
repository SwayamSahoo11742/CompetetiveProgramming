#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<int> a(n), b(n), dmin, dmax;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        for(int i = n-1; i >= 0; i--){
            dmin.push_back(*lower_bound(b.begin(), b.end(), a[i]) - a[i]);
        }
        int ind=0;
        reverse(dmin.begin(), dmin.end());
        for(int i : dmin){
            cout << i << " ";
        }cout << endl;
        for(int i=0;i<n;i++){
            ind=max(ind,i);
            while(ind<n-1&&a[ind+1]<=b[ind])ind++;
            cout<<b[ind]-a[i]<<' ';
        } cout << endl;
    }
}