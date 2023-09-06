#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        string a,b;
        cin >> a >> b;
        string ans = "NO";
        for(int i = 0; i < a.size()-1; i++){
            if(a[i] == '0' && a[i+1] == '1' && b[i] == '0' && b[i+1] == '1'){
                ans = "YES";
                break;
            }
        }
        cout << ans << endl;
    }
}