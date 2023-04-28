#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n, x, y, w; cin >> n >> x >> y;

        if(x + y == 0){
            cout << -1 << endl;
            continue;
        }

        if(x != 0 && y != 0){
            cout << -1 << endl;
            continue;
        }else{
            w = x == 0? y:x;
        }

        if(w == n - 1){
            for(int i = 0; i < w; i++){
                cout << 1 << endl;
            }
            continue;
        }

        if(w * 2 + 1 != n){
            cout << -1  << endl;
            continue;
        }
        else{
            for(int i = 0; i < w; i++){
                cout << 2 << " ";
            }
            
            for(int i = 0; i<w; i++){
                cout << (w == 1? n:n-1) << " ";
            }
            cout << endl;
        }


    }
}