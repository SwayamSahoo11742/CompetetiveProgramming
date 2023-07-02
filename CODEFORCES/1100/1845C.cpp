#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        string s; cin >> s;
        int m; cin >> m;
        string l, r; 
        cin >> l >> r;
        vector<int> pass;
        map<int,int> mp;
        for(int i = 0; i < s.size() ;i++){
            pass.push_back(s[i] - '0');
        }
        int b = 0;
        string ans = "NO";
        for(int i = 0; i < m; i++){
            int idx = 0;
            for(int j = l[i]-'0'; j <= r[i]-'0'; j++){
                int found = 0;
                
                for(int k = b; k < s.size(); k++){
                    if(s[k] == j){
                        idx = max(idx, k);
                        found = 1;
                        break;
                    }
                }
                if(!found){
                    cout << j << endl;
                    ans = "YES";
                    break;
                }
            }
            b = idx;
            cout << b << endl;
        }   
        cout << ans << endl;

        

    } 
}