#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        map<int, vector<int>> m;
        vector<int> a(n);
        set<int> unq;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            m[a[i]].push_back(i);
            unq.insert(a[i]);
        }

        
        int ans = 1;
        for(int i : unq){
            if(count(a.begin(), a.end(), i) < 2){
                ans = -1;
                break;
            }
        }
        if(ans == -1){
            cout << ans << endl;
            continue;
        }

        vector<int> shuffle;

        for(int i = 0; i < n; i++){

            shuffle.push_back(m[a[i]][*find(m[a[i]].begin(), m[a[i]].end(), i) - 1]);
            for(auto j : m[a[i]]){
                if(j != i){
                    
                    shuffle.push_back(j+1);
                    break;
                }
            }
        }

        for(auto i : shuffle){
            cout << i << " ";
        }
        cout << endl;
    }
}