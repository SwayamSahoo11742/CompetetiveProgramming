#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int T; cin >> T;

    while(T--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int gd = a[0];
        for(int i = 1; i < n; i++){
            gd = __gcd(gd, a[i]);
        }

        cout << *max_element(a.begin(), a.end()) / gd << endl;
    }   
    return 0;
}
