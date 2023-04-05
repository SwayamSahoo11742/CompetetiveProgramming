#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; cin >> T;

    while(T--){
        int x, y; cin >> x >> y;

        cout << 2 * (x - y) << endl;

        for(int i = x; i > y; i--){
            cout << i << " ";
        }

        for(int i = y; i < x; i++){
            cout << i << " ";
        }

        cout << endl;
    }
}