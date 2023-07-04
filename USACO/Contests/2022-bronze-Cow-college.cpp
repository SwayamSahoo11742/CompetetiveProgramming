#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end(),greater<>());
    long long profit = -1, fee = 0;
    for(int i = n-1; i >= 0; i--){
        long long preprof = (i+1)*a[i];
        if(preprof > profit){
            profit = preprof;
            fee = a[i];
        }

        if(preprof == profit){
            fee = min(fee,a[i]);
        }
    }
    cout << profit << " " << fee << endl;
}