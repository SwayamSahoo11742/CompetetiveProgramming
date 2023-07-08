#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        string s; cin >> s;
        int m; cin >> m;
        string l, r; 
        cin >> l >> r;
        int ct = 0;
        int it = -1;
        for(int i = 0; i < m;i++){
            int st = it+1;
            for(char j = l[i]; j <= r[i]; j++ ){
                int tmp = s.find(j,st);
                if(tmp == -1){
                    ct = 1;
                    break;
                }
                it = max(it,tmp);
            }
            if(ct == 1){
                break;
            }
        }
        if(ct){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

        

    } 
}