#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        bool no =true;
        for(int i = 1; i <= n; i++){
            int a; cin >> a;

            if(a <= i){
                no = false;
            }

        }

        if(no){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}