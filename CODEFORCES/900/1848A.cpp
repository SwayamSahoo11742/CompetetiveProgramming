#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n,m,k,x,y; cin >> n >> m >> k >> x >> y;
        string ans = "YES";
        for(int i = 0; i < k; i++){
            int a,b; cin >> a >> b;
            if((abs(x-a)+abs(y-b)) % 2 == 0){
                ans = "NO";
            }
        }
        cout << ans << endl;
    }
}