#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        long long n;cin >> n;
        long long ans = 1;
        while(n!=1){
            ans += n;
            n = (n - (n%2?1:0))/2;
        }
        cout <<ans<< endl;
    }
}