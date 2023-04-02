#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; cin >> T;

    while(T--){
        int n; cin >> n;

        if (n % 2 == 0){
            cout << -1 << endl;
            continue;
        }

        vector<int> a;
        int ans = 0;
        for(int i = 29; i >= 1; i--){
            if ((n >> i) & 1){
                ans = 1;
                a.push_back(2);
            }
            else if (ans) {
                a.push_back(1);
            }
        }
        cout << a.size() << endl;

        for (auto i : a){
            cout << i << " ";
        }

        cout << endl;
    }
}