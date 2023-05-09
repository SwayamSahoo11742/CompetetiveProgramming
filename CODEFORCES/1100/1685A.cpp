#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i <n; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        vector<int> ans;
        for(int i = 0; i < n; i++){
            if(!i%2){
                ans.push_back(a.front());
                a.erase(a.begin());
            }else{
                ans.push_back(a.back());
                a.pop_back();
            }
        }

        if(ans.back() <= ans.front()){
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;


    }
}