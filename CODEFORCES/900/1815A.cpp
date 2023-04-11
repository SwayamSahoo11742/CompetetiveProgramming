#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;

        long long a[n];

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        if(n % 2){
            cout << "YES" << endl;
            continue;
        }

        for(int i = 1; i < n - 1; i++){
            a[i + 1] -= a[i] - a[i - 1];
            a[i] = a[i - 1];
        }

        if(a[n - 1] < a[n - 2]){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}