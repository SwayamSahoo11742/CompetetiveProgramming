#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main(){
    int T; cin >> T;
    while(T--){
        ll n, k; cin >> n >> k;
        int count = 0;
        vector<vector<int>> r;
        for(int i = 0; i < n; i++){
            vector<int> t(n);
            for(int j = 0; j < n; j++){
                cin >> t[j];
            }
            r.push_back(t);
        }
 
        for (int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if (r[i][j] != r[n-i-1][n-j-1]){
                    count++;
                }
            }
        }
 
        count /= 2;

 
        if(k < count){
            cout << "NO" << endl;
        }else if((count - k) % 2 && n % 2 == 0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}