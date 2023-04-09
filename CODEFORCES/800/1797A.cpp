#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool corner(ll x, ll y, ll n, ll m){
    if((x == 1 && y == 1) || (x == 1 && y == m) || (x == n && y == 1) || (x == n && y == m)){
        return true;
    }
    return false;
}

bool edge(ll x, ll y, ll n, ll m){
    if(x == 1 || y == m || x == n || y == 1){
        return true;
    }
    return false;
}
int main(){
    int T; cin >> T;
    
    while(T--){
        ll n, m; cin >> n >> m;
        ll x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;

        if(corner(x1, y1, n, m) || corner(x2, y2, n ,m)){
            cout << 2 << endl;
        }else if(edge(x1,y1,n,m) || edge(x2,y2,n,m)){
            cout << 3 << endl;
        }
        else{
            cout << 4 << endl;
        }
    }
}