#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){
    int T; cin >> T;
    while(T--){
        ll n; cin >> n;
        ll div = 1;
        for(int i = 2; i*i <= n; i++){
            if(n%i == 0){
                div = n/i;
                break;
            }
        }
        cout << div << " " << n - div << endl;
    }
}