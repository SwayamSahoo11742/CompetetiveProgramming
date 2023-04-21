#include <bits/stdc++.h>

using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        if(n%2 == 0){
            cout << 1 << " " << 3 << " ";
            for(int i = 0; i < n-2; i++){
                cout << 2 << " ";
            }
            cout << endl;
        }else{
            for(int i = 0; i < n; i++){
                cout << 8 << " ";
            }
            cout << endl;
        }
    }
}