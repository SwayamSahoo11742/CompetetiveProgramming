#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin >> n;
    vector<long long> a(n);
    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }

    long long h = 0;

    sort(a.begin(), a.end());
    if(n%2 == 0){
        h = a[(n/2)-1];
    }else{
        h = a[((n+1)/2)-1];
    }

    long long ans = 0; 
    for(long long i : a){
        ans += abs(h - i);
    }
    cout << ans << endl;
}