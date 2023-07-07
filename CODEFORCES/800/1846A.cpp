#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        int ans = 0;
        for(int i = 0; i < n ; i++){
            int x,y;
            cin >> x >> y;
            if(x > y){
                ans ++;
            }
        }
        cout << ans <<  endl;
    }

}