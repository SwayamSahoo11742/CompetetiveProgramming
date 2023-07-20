#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<long long>a(n);
        for(int i = 0;i <n; i++){
            cin >> a[i];
        }
        if(n==1){
            cout << 0 << endl;
            continue;
        }

        if((a[0] + a[n-1]) % 2){
            a[n-1] = a[0];
        }else{
            a[0] = a[n-1];
        }
        cout << n-1 << endl;
        cout << 1 << " " << n << endl;

        for(int i = 1; i < n-1; i++){
            if((a[i]+a[0])%2){
                cout << 1 << " " << i+1 << endl;
            }else{
                cout << i+1 << " " << n << endl;
            }
        }
    }
}