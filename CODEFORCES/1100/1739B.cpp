#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<int> a(n), d(n);
        for(int i = 0; i < n; i++){
            cin >> d[i];
        }

        a[0] = d[0];
        for(int i = 1; i < n; i++){
            if (a[i-1] - d[i] > -1 && d[i] != 0){
                a[0] = -1;
                break;
            }
            else{
                a[i] = d[i] + a[i-1];
            }
        }

        if(a[0] == -1){
            cout << a[0] << endl;
        }else{
            for(auto i : a){
                cout << i << " ";
            }
            cout << endl;
        }
    }
}