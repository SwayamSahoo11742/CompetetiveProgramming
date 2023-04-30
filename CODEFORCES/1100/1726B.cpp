#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n, m; cin >> n >> m;
        if(m < n || (n%2 == 0 && m%2)){
            cout << "No" << endl;
            continue;
        }

        if(n==1){
            cout << "Yes" << endl;
            cout << m << endl;
            continue;
        }

            if(n%2){
                cout << "Yes" << endl;
                for(int i = 0; i < n-1; i++){
                    cout << 1 << " ";
                }
                cout << m-n+1 << endl;
            }else{
                cout << "Yes" << endl;
                for(int i = 0; i < n-2; i++){
                    cout << 1 << " ";
                }

                cout << (m-n+2)/2 << " " << (m-n+2)/2 << endl;
            }
    }
}
