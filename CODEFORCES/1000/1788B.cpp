#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
int main(){
    int T; cin >> T;

    while(T--){
        ull n; cin >> n;

        if (n % 2 == 0){
            cout << n/2 << " " << n/2 << endl;
        }
        else if (n % 10 == 9 && n > 10){
            cout << n/2 - 4 << " " << n/2 + 5 << endl;
        }
        else if (n % 2 == 1){
            cout << n/2 << " " << n/2 + 1 << endl;
        }

    }
}