#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int n, q; cin >> n >> q;
        vector<int> a(n);
        set<int> s;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] > 9){
                s.insert(i);
            }
        }
        while(q--){
            int m; cin >> m;
            if(m == 2){
                int x; cin >> x;
                cout << a[x-1] << endl; 
            }else{
                int l, r; cin >> l >> r;
                l--;r--;
                int lt = l;
                while(!s.empty()){
                    auto it = s.lower_bound(lt);
                    if(it == s.end() || *it > r){
                        break;
                    }
                    int digsum = 0;
                    int num = a[*it];
                    while(num){
                        digsum += num % 10;
                        num/=10;
                    }
                    a[*it] = digsum;
                    int altit = *it;
                    s.erase(it);
                    if(a[altit] > 9){
                        s.insert(altit);
                    }
                    lt = altit+1;
                }
            }
        }
    }
}