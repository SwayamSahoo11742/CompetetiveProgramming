#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll n1 = 1e9+7;
int main(){
    int T; cin >> T;
    while(T--){
    ll n;
    cin>>n;
    ll ans=((((n*(n+1))%n1)*(4*n-1))%n1*337)%n1;
    cout<<ans<<endl;
    }
}