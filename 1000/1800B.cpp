#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; cin >> T;

    while(T--){
        int n, k; cin>>n>>k;
        int b = 0;
        string s;cin >> s;
        vector<int> u(26, 0), l(26, 0);

        for (auto i: s){
            if('A' <= i && 'Z' >= i){
                u[i - 'A']++;
            }else{
                l[i - 'a']++;
            }
        }

        for (int i = 0; i < 26; i++){
            int p = min(u[i], l[i]);

            b += p;
            l[i] -= p; u[i] -= p;
            
            int change = min(k, max(u[i], l[i]) / 2);
            k -= change;
            b += change;
        }   

        cout << b <<endl;

    }
}