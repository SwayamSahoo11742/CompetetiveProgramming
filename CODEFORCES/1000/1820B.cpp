// #include <bits/stdc++.h>

// using namespace std;
// typedef long long ll;
// int main(){
//     int T; cin>> T;
//     while(T--){

//         string s; cin >> s;
//         int n = s.length();
//         cout << "------------------" << endl;
//     for (int i = 0; i < n; i++) {
//         string shifted_str = s.substr(n-i) + s.substr(0, n-i);
//         cout << shifted_str << std::endl;
//     }

//     }
// }



#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll T; cin>> T;
    while(T--){

        string s; cin >> s;
        ll n = s.length();
        if(count(s.begin(), s.end(), '0') == 0){
            cout << static_cast<ll>(n)*n << endl;
            continue;
        }

        if(count(s.begin(), s.end(), '1') == 0){
            cout << 0 << endl;
            continue;
        }

        s+=s;
        n = s.length();
        ll cur_length = 0, max_length = 0;
        for(ll i = 0; i < n; i++){
            if(s[i] == '1'){
                cur_length++;
            }else{
                max_length = max(max_length, cur_length);
                cur_length = 0;
            }
        }

        max_length = max(max_length, cur_length);

        if(max_length == 1){
            cout << 1 << endl;
            continue;
        }

        ll ans=0, w = 1;
        for(ll i = max_length; i >= 1; i--){
            ans = max(ans, i * w);
            w++;
        }

        cout << ans << endl;




    }
}