#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        string s; cin >> s;
        auto pos0 = s.find('0');
        int pos1 = -1;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '1'){
                pos1 = i;
            }
        }
        if(pos1 == -1){
            pos1 = 0;
        }

        if(pos0 == string::npos){
            pos0 = s.length()-1;
        }

        cout << pos0 - pos1 + 1 << endl;

    }
}