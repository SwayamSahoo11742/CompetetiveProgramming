#include <bits/stdc++.h>

using namespace std;


int main(){
    int T; cin >> T;

    while(T--){
        int n; cin >> n;
        string s; cin >> s;
        vector<int> a(n);
        vector<vector<int>> b;
        int ans = 0; 
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(s[i] == '1'){
                ans+=a[i];
            }
        }
            
        
        vector<int> temp;
        for(int i = 0; i < n; i++){
            if(s[i] == '0'){
                if(!temp.empty()){
                    b.push_back(temp);
                    temp.clear();
                }
                temp.push_back(a[i]);
            }
            else if(!temp.empty()){
                temp.push_back(a[i]);
            }
        }

        if (!temp.empty()){
            b.push_back(temp);
        }

        for(auto i : b){
            ans += i[0] - *min_element(i.begin(), i.end());
        }

        cout << ans << endl;
            

    }
}