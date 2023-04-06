#include <bits/stdc++.h>

using namespace std;
string pi = "314159265358979323846264338327";

int main(){
    int T; cin >> T;

    while(T--){
        string n; cin >> n;

        int ans = 0;
        for(int i = 0; i < n.length(); i++){
            if (n[i] == pi[i]){
                ans++;
            }
            else{
                break;
            }
        }

        cout << ans << endl;
    }
}