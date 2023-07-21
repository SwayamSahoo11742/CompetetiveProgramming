#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int T; cin >> T;
    while(T--){
        ll n, c; cin >> n >> c;
        vector<ll> s(n);
        ll A = 0, B = 0, C = 0;
        for(int i = 0; i <n; i++){
            cin >> s[i];
            C += s[i] * s[i];
            B += s[i]*2;
            A++;
        }
        C-=c;
        ll dis = B*B-4*A*C;
        ll r1 = ((-1*B) + sqrt(dis))/(2*A);
        ll r2 = ((-1*B) - sqrt(dis))/(2*A);
        cout << max(r1,r2)/2 << endl;
    }
}