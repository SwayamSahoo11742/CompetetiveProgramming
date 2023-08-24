#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
void tc(){
    ll n;
    string s;
    cin>>n>>s;
    ll ans=0;

    for(ll i=0;i<s.size();i++){

        int fr[10]{}, distinct=0, max_freq=0;

        for(ll j=i;j<s.size() && (++fr[s[j]-'0'])<=10;j++){

            max_freq=max(max_freq,fr[s[j]-'0']);
            if(fr[s[j]-'0']==1) distinct++;

            if(distinct>=max_freq) ans++;
        }
    }
    cout<<ans<<'\n';
}
int main()
{

    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while(t--) tc();
    return 0;
}