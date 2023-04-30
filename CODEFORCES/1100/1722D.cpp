#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        string s; cin >> s;
        vector<long long> ans;
        long long score = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == 'L'){
                ans.push_back((n - 1 - i) - i);
                score +=i;
            }else{
                ans.push_back(i - (n - 1 - i));
                score += n-1-i;
            }
        }

        sort(ans.begin(),ans.end(), greater<int>());
        for (int i = 0; i < n; i++) {
            if (ans[i] > 0) {score += ans[i];}
            cout << score << ' ';
	    }
	    cout << '\n';
        

    }
}