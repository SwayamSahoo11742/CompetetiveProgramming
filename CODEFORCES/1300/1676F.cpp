#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n, k; cin >> n >> k;
        vector<int> a(n); 
        set<int> s;
        map<int,int> m;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            m[a[i]]++;
            if(m[a[i]] >= k){
                s.insert(a[i]);
            }
        }

        vector<int> en(s.begin(), s.end());
        sort(en.begin(), en.end());
        if(en.empty()){
            cout << -1 << endl;
            continue;
        }
        int cur = 1, ans = -1, end=en[en.size()-1];;
        for(int i = 1; i < en.size(); i++){
            if(en[i]-en[i-1] == 1){
                cur++;
            }if(en[i]-en[i-1]!=1 || i == en.size()-1){
                ans = max(cur, ans);
                end = ans == cur? en[i]:ans;
                cur = 1;
            }
        }
        cout <<end-(ans-1) << " " << end <<endl;

    }
}