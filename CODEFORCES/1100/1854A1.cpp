#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<int> a(n);
        int p = -1;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] > 0){
                p = i;
            }
        }
        if(n==1){
            cout << 0 << endl;
            continue;
        }
        if(p==-1){
            cout << n-1 << endl;
            for(int i = 0; i < n-1; i++){
                cout << n-i-1 << " " << n-i <<endl;
            }
        }else{
            vector<pair<int,int>> ops;
            while(a[p] < 20){
                a[p] *= 2;
                ops.push_back({p+1,p+1});
            }
            ops.push_back({2, p+1});
            ops.push_back({2, p+1});
            for(int i = 3; i <= n; i++){
                ops.push_back({i, i-1});
                ops.push_back({i, i-1});
            }
            cout << ops.size() << endl;
            for(auto [x,y]: ops){
                cout << x << " " << y << endl;
            }
        }
    }
}