#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_set;
int main(){
    int n, k, t; cin >> n >> k;
    ordered_set a;
    int c[200005];
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        c[i] = x;
        a.insert({x, t++});
        if(i >= k){
            a.erase(a.lower_bound({c[i - k], 0}));
        }
        if(i >= k-1){
            cout << (*a.find_by_order(((k-1)/2))).first << endl;
        }
    }
}