#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; cin >> T;

    while(T--){
        int n, total2 = 0;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if (a[i] == 2){
                total2++;
            }
        }

        if(total2 % 2 == 1){
            cout << -1 << endl;
            continue;
        }
        if (total2 == 0){
            cout << 1 << endl;
            continue;
        }

        total2 /= 2;
        for(int i = 0; i<n; i++){
            if(a[i] == 2){
                total2--;
            }
            if(!total2){
                cout << i + 1 << endl;
                break;
            }

        }
    }
}