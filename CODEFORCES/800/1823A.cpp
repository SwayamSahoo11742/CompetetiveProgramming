#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n,k,x; cin >> n >>k;
        x = -1;
        for(int i = 0; i <= n; i++){
            if(i*(i-1)/2+(n-i)*(n-i-1)/2 == k){
                x = i;
            }
        }   
        if(x==-1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            for(int i = 0; i < n; i++){
                if(i < x){
                    cout << 1 << ' ';
                }else{
                    cout << -1 << ' ';
                }
                cout << endl;
            }
        }
    }
}