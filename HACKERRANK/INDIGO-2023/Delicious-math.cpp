#include <bits/stdc++.h>
using namespace std;

const string PI = "31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
int main(){
    int T; cin >> T;

    while(T--){
     string p; cin >> p;
     int ans = 0;

     for(int i = 0; i < p.length(); i++){
        if(p[i] != PI[i]){
            break;
        }else{
            ans++;
        }
     }
     cout << ans << endl;
    }
}