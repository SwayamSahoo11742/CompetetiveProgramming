#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int m, k, ai, ak; cin >> m >> k >> ai >> ak;
        bool y = (m%k<=ai && m/k <= ak);
        if(ai >= m || y){
            cout << 0 << endl;
            continue;
        }
        else{
            int v1,v2,v3;
            v2 = min(m-k*min(m/k, ak), ai);
            v3 = m-v2-k*min(m/k, ak);
            if(!(v3%k)){
                cout << v3/k << endl;
            }else{
                if((k - v3%k) <= v2){
                    cout << (v3/k)+1 << endl;
                }else{
                    int fl = (v3/k) + (v3%k);
                    cout << fl << endl;
                }
            }
        }



    }
}