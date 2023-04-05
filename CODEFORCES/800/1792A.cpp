#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; cin >> T;

    while(T--){
        int n; cin >> n;

        int ones = 0;
        int total = 0;
        for(int i = 0; i < n; i++){
            int x; cin >> x;

            if (x == 1){
                ones++;
            }else{
                total++;
            }
        }

        cout << total + floor(ones/2) + ones % 2 << endl;
    }
}