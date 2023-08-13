#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int k; cin >> k;
    long long ans = k+1;
    for(int i = 1; i < n; i++){
        ans *= (k+1);
    }
    cout << ans-1 << endl;
}