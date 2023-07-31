#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n; cin >> n;
    vector<int> a(n), x(n), y(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n;j ++){
            cin >> a[j];
            y[i]+=a[j];
            x[j]+=a[j];
        }
    }
    ll ax = LLONG_MAX;
    for(int i = 0; i < n; i++){
        ll sc = 0;
        for(int j = 0; j < n; j++){
            if(j!=i){
                sc += abs(j-i)*x[j];
            }
        }
        ax = min(ax, sc);
    }
    ll ay = LLONG_MAX;
    for(int i = 0; i < n; i++){
        ll sc = 0;
        for(int j = 0; j < n; j++){
            if(j!=i){
                sc += abs(j-i)*y[j];
            }
        }
        ay = min(ay, sc);
    }
    cout << ax +ay<< endl;
}