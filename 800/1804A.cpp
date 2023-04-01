#include <bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin >> T;

    while(T--){
        int r=0, c=0, a,b;
        cin >> a >> b;

        if (abs(a) == abs(b)){
            cout << 2 * abs(a) << endl;
        }
        else{
            cout << 2 *  max(abs(a), abs(b)) -1 << endl;
        }

    }
}