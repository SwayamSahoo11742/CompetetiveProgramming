#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; cin >> T;

    while(T--){
        int n; cin >> n;

        int a[n][n];

        int s = 1, l = n*n;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j <n; j++){
                int idx;
                if(i % 2 == 1){
                    idx = n - j - 1;
                }else{
                    idx = j;
                }

                
                if(cnt % 2 == 0){
                    a[i][idx] = s;
                    s++;
                }else{
                    a[i][idx] = l;
                    l--;
                }

                cnt++;

            }   
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout << a[i][j] << " " ;
            }

            cout << endl;
        }
    }
}