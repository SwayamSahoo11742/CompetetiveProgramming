#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; cin >> T;

    while (T--){
        long long n; cin >> n;

        priority_queue<long long> b;
        long long ans = 0;
        for(int i = 0; i < n; i++){
            long long c; cin >> c;

            if (c > 0){
                b.push(c);
            }
            else if (! b.empty()){
                ans += b.top();
                b.pop();
            }
        }

        cout << ans << endl;
    }
}