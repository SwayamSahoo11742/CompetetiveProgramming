#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n, m; cin >> n >> m;
        long long sma = 0, smb=0;
        vector<long long> a(n), b(m);
        for(int i = 0;i < n; i++){
            cin >> a[i];
            sma +=a[i];
        }
        for(int i = 0; i < m; i++){
            cin >> b[i];
            smb += b[i];
        }

        if(sma > smb){
            cout << "Tsondu" << endl;
        }else if(smb > sma){
            cout << "Tenzing" << endl;
        }else{
            cout << "Draw" << endl;
        }
    }
}