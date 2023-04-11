#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;

        for (int i = 0; i < n; i++){
            if(i % 2){
                cout << i + 1 <<" ";
            }else{
                cout << 2 * n - i << " ";
            }
        }
        cout << endl;
        for (int i = 0; i < n; i++){
            if(i%2){
                cout << n + 1 + i - 1 << " ";
                
            }else{
                cout << i + 1 << " ";
            }
        }

        cout << endl;
    }
    return 0;
}
