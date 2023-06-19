#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<int> a(n);
        int zero = 0, one = 0,  two = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] == 0){
                zero = 1;
            }

            if(a[i] == 1){
                one = 1;
            }

            if(a[i] == 2){
                two = 1;
            }
        }
        if(one && zero || one && two){
            cout << "NO" << endl;
            continue;
        }
        if(one){
            string ans = "YES";
            sort(a.begin(), a.end());
            for(int i= 1; i < n; i++){
                if(abs(a[i] - a[i-1])==1){
                    ans = "NO";
                    break;
                }
            }
            cout << ans << endl;
        }else{
            cout << "YES" << endl;
        }
        
    }
}