#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; cin >> T;

    while(T--){
        long long a, b, n, m; cin >> a >> b >> n >> m;

        long long g = floor(n/(m + 1));
        long long req = n - g * (m + 1);

        cout << g * min(a * m, b*(m+1)) + min(a  * req, b * req) << endl;;

    }
}