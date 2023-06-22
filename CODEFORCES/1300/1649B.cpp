#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<int> a(n);
        long long sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        long long mx = *max_element(a.begin(), a.end());
        if(mx == 0){
            cout << 0 << endl;
            continue;
        }
        if(mx*2 <= sum){
            cout << 1 << endl;
        }else{
            cout << mx*2 - sum << endl;
        }
    }
}