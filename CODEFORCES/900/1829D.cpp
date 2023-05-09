#include <bits/stdc++.h>
using namespace std;
vector<int> ans;
void split(int n, int m){
    ans.push_back(n);
    if(n % 3 != 0 || n < m || count(ans.begin(), ans.end(), m)){
        return;
    }else{
        split(n/3, m);
        split((n*2)/3, m);
    }
}


int main(){
    int T; cin >> T;
    while(T--){
        int n, m; cin >> n >> m;
        ans.clear();
        split(n, m);
        if(count(ans.begin(), ans.end(), m)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }
}