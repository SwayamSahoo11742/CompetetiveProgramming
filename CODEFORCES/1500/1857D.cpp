#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<int> a(n), b(n);
        int c = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        int mx = INT_MIN;
        for(int i = 0; i < n; i++){
            mx = max(mx, a[i]-b[i]);
        }
        for(int i = 0; i < n; i++){
            c += (a[i]-b[i] == mx);
        }
        cout << c << endl;
        for(int i = 1; i <= n; i++){
            if(a[i-1] - b[i-1] == mx){
                cout << i << " ";
            }
        }
        cout << endl;

    }
}