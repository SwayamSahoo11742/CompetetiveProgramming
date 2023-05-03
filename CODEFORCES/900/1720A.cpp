#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        long long a,b,c,d; cin >> a >> b >> c >> d;
        if (a*d == b*c){
            cout << 0 << endl;
            continue;
        }
        long long y = b * c, x = a * d;
        if(y != 0 && x % y == 0 || x != 0 && y % x == 0){
            cout << 1 << endl;
            continue;
        }

        cout << 2 << endl;
    }
}