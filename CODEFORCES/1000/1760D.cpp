#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<int> a;
        for(int i = 0; i < n; i++){
            int t; cin >> t;
            if(!i){
                a.push_back(t);
                continue;
            }
            if(t != a[a.size() - 1]){
                a.push_back(t);
            }
        }
        if(n == 1){
            cout << "YES" << endl;
            continue;
        }

        int vals = 0;
        n = a.size();

        for(int i = 0; i < n; i++){
        if((i == 0 || a[i-1] > a[i]) && (i == a.size()-1 || a[i] < a[i+1]))
        {
            vals++;
        }
        }

        if(vals != 1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }

    }
}