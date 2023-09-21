#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        int k; cin >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i]; 
        }
        int tot = 0, sbtot = 0;
        for(int i = 0; i < n-1; i++){
            if(a[i] < a[i+1] * 2){
                sbtot++;
            }else{
                sbtot++;
                tot += max(sbtot - k, 0);
                sbtot = 0;
            }
        }
        tot += max((sbtot+1) - k, 0 );
        cout <<tot << endl;
    }
}