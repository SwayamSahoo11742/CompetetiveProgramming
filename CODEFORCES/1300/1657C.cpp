#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        string s; cin >> s;
        int l = 0;
        int cnt = 0;
        while(l+1 < n){
            if(s[l] == '(' || s[l] == ')' && s[l+1] == ')'){
                l+=2;
            }else{
                int r = l+1;
                while(s[r] != ')' && r < n){
                    r++;
                }
                if(r==n){
                    break;
                }
                l = r+1;
            }
            cnt++;
        }
        cout << cnt << " " << n - l << endl;
    }
}