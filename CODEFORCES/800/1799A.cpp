#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; cin >> T;

    while(T--){
        int m, n; cin >> n >> m;

        vector<long long> p;
        vector<long long> ans(n, -1);

        int c = 0;

        for(int i = 0; i < m; i++){
            long long temp; cin >> temp;

            if (find(p.begin(), p.end(), temp) != p.end()){
                continue;
            }else{
                p.push_back(temp);
            }

           if (c < n) {
                ans[ans.size() - c - 1] = i + 1;
                c++;
            }
            else {
                continue;
            }
        }

        for (auto i : ans){
            cout << i<< " ";
        }
        cout << endl;
        

    }
}