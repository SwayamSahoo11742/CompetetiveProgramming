#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i <n; i++){
            cin >> a[i];
        }
        int res = 0;
        set<long long> t1, t2;
        for(int i = 0; i < n; i++){
            if(!i){
                t2.insert(a[0]);
            }else{
                
                if(!distance(t1.begin(), t1.lower_bound(a[i])) && distance(t2.begin(), t2.lower_bound(a[i]))){
                    res++;
                    t1.insert(a[i]);
                }
                t2.insert(a[i]);
            }
        }
        cout << res << endl;
    }
}