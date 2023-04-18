#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        if(n == 1){
            cout << 1 << endl;
            continue;
        }
        int ct1 = count(a.begin(), a.end(), a[1]), ct2 = count(a.begin(), a.end(), a[0]);
        if(ct1 == ct2 && ct1+ct2==n){
            cout << n/2 + 1 << endl;
            continue;
        }
        cout << n << endl;
    }

}