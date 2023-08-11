#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int a; cin >> a;
        int ans = 0;
        vector<int> n(a);
        for(int i = 0; i < a; i++){
            cin >> n[i];
            if(n[i]%2==1){
                ans++;
            }
        }
        if(ans % 2 == 0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }
}