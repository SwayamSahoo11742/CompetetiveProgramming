#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int f = 1, l = -1;
        int n; cin >> n;
        vector<long long> a(n-1);
        set<int> p;
        for(int i = 0; i < n-1; i++){
            cin >> a[i];
        }
        p.insert(n);
        for(int i = 0; i < n-1;i++){
            p.insert(i+1);
        }
        if(p.find(a[0]) != p.end()){
            p.erase(p.find(a[0]));
        }else{
            if(l < 0){
                l = a[0];
            }else{
                f--;
            }
        }
        for(int i = 1; i <n-1; i++){
            int d = a[i] - a[i-1];
             auto loc = p.find(d);
            if(loc != p.end()){
                p.erase(loc);
            }else{
                if(l == -1){
                    l = d;
                }else{
                    f = 0;
                }
            }
        }
        if(!f){
            cout << "NO" << endl;
        }else{
            int sm = accumulate(p.begin(), p.end(), 0);
            if(l < 0){
                int r = n*(n+1)/2;
                cout << (r-a[n-2]==sm? "YES\n":"NO\n");
            }else{
                cout << (sm == l? "YES\n": "NO\n");
            }
        }
    }
}