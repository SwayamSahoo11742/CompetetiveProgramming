#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int a,b; cin >> a >> b;
        if(a>1 && b > 1){
            cout << 1 << endl;
            continue;
        }else{
            cout << a + b << endl;
        }
    }
}