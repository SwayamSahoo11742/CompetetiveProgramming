#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        string s, t; cin >> s >> t;

        if(t == "a"){
            cout << 1 << endl;
        }else if(count(t.begin(), t.end(), 'a')){
            cout << -1 << endl;
        }else{
            long long siz = pow(2, s.length());
            cout <<siz<< endl;
        }
    }
}