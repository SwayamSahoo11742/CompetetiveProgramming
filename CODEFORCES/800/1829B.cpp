#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<int> a(n);
        int ans = 0;
        int blanks = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] == 0){
                blanks++;
            }
            if(a[i] == 1 || i == n - 1){
                ans = max(ans, blanks);
                blanks = 0;
            }
        }

        cout << ans << endl;


    }
}