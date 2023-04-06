#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; cin >> T;

    while(T--){;
        int n, s, r ; cin >> n >> s >> r;
        int max = s-r;
        vector<int> ans(n, 0);
        ans[0] = max;
        bool found = false;
        for(int i = 0; i < n; i++){
            while(ans[i] != max){
                ans[i]++;
                r--;

                if(count(ans.begin(), ans.end(), 0) == r){
                    found = true;
                    break;
                }

            }

            if(found){
                break;
            }
        }

        for(int i : ans){

            cout << (i == 0? 1 : i) << " ";
        }

        cout << endl;
    }
}