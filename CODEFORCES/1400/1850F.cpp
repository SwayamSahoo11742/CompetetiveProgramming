
#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        ll n;
        cin>>n;
        map<ll,ll> mp;
        vector<ll> a(n+1);
        for (ll i = 0; i < n; i++){
            ll x; cin >> x;
            if (x<=n){
                mp[x]++;
            }
        }
        for (ll i = 1; i <= n; i++){
            if (mp[i]){
                ll hop = i;
                for (ll j = hop; j <= n; j+=hop){
                    a[j] += mp[i];
                }
            }
        }
        ll fctrs = *max_element(a.begin(), a.end());
        
        cout<<fctrs<<endl;
    }
}