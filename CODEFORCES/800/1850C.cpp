#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        string ans = "";
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                char a; cin >> a;
                if(a != '.'){
                    ans.push_back(a);
                }
            }
        }
        cout << ans << endl;
    }
    
}