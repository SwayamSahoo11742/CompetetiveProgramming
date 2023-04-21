#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; cin>>T;
    while(T--){
        long long n; cin >> n;
        vector<long long> b(n);
        long long asum = 0, bsum = 0;
        for(int i = 0; i < n; i++){
            long long tem;
            cin >>tem;
            asum += tem;
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }

        for(long long i : b){
            bsum += i;
        }

        cout << asum + bsum - *max_element(b.begin(), b.end()) << endl;
    }
}