#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        string s; cin >> s;
        vector<int> ans;
        int jumps = 0, cost = 0;

        int i = 0;
        ans.push_back(1);
        while(i != s.length() - 1){
            int closest = 0;
            for(int j = 0; j < s.length(); j++){
                if(!count(ans.begin(), ans.end(), j) && j != i){
                    if(abs((s[closest] - '0') - (s[i] - '0')) > abs((s[j] - '0') - s[i] - '0')){
                        closest = j;
                    } 
                }
            }
            cost += s[closest] - '0' - (s[i] - '0');
            ans.push_back(i+1);
            i = closest;
            jumps++;
            cout << i << endl;
        }

        cout << jumps << " " << cost << endl;
        for(auto i: ans){
            cout << i << " ";
        }
        cout << endl;

    }
}