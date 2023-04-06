#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){
    int T; cin >> T;

    while(T--){
        int n; cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        bool found = false;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == j){
                    continue;
                }
                if(gcd(a[i], a[j]) <= 2){
                    found = true;
                }
            }
            if(found){
                break;
            }
        }

        if(found){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        

    }
}