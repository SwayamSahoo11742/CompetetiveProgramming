#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, q; cin >> n >> q;
    vector<int> a(n);
    vector<vector<int>> h(n - 1);
    vector<int> r(q);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n - 1; i++){
        vector<int> temp(2);

        for(int i = 0; i < 2; i++){
            cin >> temp[i];
        }

        h[i] = temp;
    }

    for(int i = 0; i < q; i++){
        
    }


}