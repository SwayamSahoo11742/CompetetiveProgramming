#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;

        if(n == 3){
            cout << "NO" << endl;
            continue;
        }

        if(n % 2 == 0){
            cout << "YES" << endl;
            for(int i = 0; i < n; i++){
                cout << (i%2? -1:1) << " ";
            }
            cout << endl;
            continue;
        }else{
            cout << "YES" << endl;
            int a = -2 - (n-5)/2, b = 1 + (n-5)/2;
            for(int i = 0; i < n; i++){
                cout << (i%2? a:b) << " ";
            }
            cout << endl;
            continue;
        }

    }
}