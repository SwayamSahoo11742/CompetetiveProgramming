#include <bits/stdc++.h>

using namespace std;

int main(){
    long long T; cin >> T;

    while(T--){
        string s; cin >> s;
        if(s[0] == '0'){
            cout << 0 << endl;
            continue;
        }

        long long ans = 1;
        for(long long i = 0; i < s.size(); i++){
            if(s[i] == '?'){
                if(i == 0){
                    ans*=9;
                }else{
                    ans*=10;
                }
            }
        }

        cout << ans << endl;

    }
}