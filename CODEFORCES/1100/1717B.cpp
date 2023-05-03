#include <bits/stdc++.h>
using namespace std;
int main(){ 
    int T; cin >> T;
    while(T--){
        int n, k, r, c; cin >> n >> k >> r >> c;
        for(int i = 1; i <= n; i++){
            vector<char> row;
            for(int j = 1; j <= n; j++){
                if((i+j)%k == (r+c)%k){
                    row.push_back('X');
                }else{
                    row.push_back('.');
                }
            }

            for(int k = 0; k < n; k++){
                cout << row[k];
            }
            cout << endl;
        }
    }

}   