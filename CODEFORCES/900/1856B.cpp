#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        long long n; cin >> n;
        vector<long long> a(n);
        long long cnt = 0, sm = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        if(n == 1){
            cout << "NO" << endl;
            continue;   
        }
        for(int i= 0; i < n;i ++){
            if(a[i]==1){
                cnt++;
            }else{
                sm=sm+(a[i]-1);
            }
        }
        if(cnt>sm){
            cout << "NO" << endl;
        }else{
            cout<< "YES" << endl;
        }


    }
}