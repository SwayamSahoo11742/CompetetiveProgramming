#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main(){
    int T; cin >> T;

    while(T--){
        ll c = 0;
        ll n; cin >> n;
        map<ll,ll> m;
        for(ll i = 2; i*i <= n; i++){
            c = 0;
            while(n % i == 0){
                c++;
                n/=i;

                if(!m.count(c)){
                    m[c] = i;
                }else{
                    m[c] *= i;
                }
            }
        }

        if(n != 1){
            if(!m.count(1)){
                m[1] = n;
            }else{
                m[1] *= n;
            }
        }
        ll sum = 0;
        for(map<ll,ll>::iterator i = m.begin(); i != m.end(); i++){
            sum += i->second;
        }

        cout << sum <<endl;
    }
}