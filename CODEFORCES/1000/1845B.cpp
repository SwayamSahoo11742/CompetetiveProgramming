#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        long long ax, ay, bx, by, cx, cy; cin >> ax >> ay >> bx >> by >> cx >> cy;
        long long ans = 1;
        if(by > ay && cy > ay){
            ans += abs(ay - min(by,cy));
            ay = min(by,cy);
        }
        if(by < ay && cy < ay){
            ans += abs(ay - max(by,cy));
            ay = max(by,cy);
        }
        if(bx > ax && cx > ax){
            ans += abs(ax - min(bx,cx));
            ay = min(by,cy);
        }
        if(bx < ax && cx < ax){
            ans += abs(ax - max(bx,cx));
            ay = max(by,cy);
        }
        cout << ans << endl;
    }
}