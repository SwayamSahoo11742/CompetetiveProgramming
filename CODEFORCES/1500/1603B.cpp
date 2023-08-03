#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        long long x, y;
        cin >> x >> y;
        if(x==y){
            cout << x << endl;
        }else if(x > y){
            cout << x+y << endl;
        }else{
            cout << y - y%x/2 << endl;
        }
    }
}