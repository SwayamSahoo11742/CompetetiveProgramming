#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int n = s.length();
        if(s.length() < 3){
            cout << -1 << endl;
            continue;
        }
        int found = 0;
        int mods = 1001;
        for(int i = 0; i < n; i++){
            if(s[i] == 'O' && i != 0 && i != n-1){
                found = 1;
                int tm = 2;
                if(s[i+1] == 'O'){
                    tm--;
                }

                if(s[i-1] == 'M'){
                    tm--;
                }

                mods = min(mods, tm);
            }
        }
        if(!found){
            cout << -1 << endl;
            continue;
        }else{
            cout << (n - 3) + mods << endl;
        }



    }
}