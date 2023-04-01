#include <bits/stdc++.h>

using namespace std;


int main(){
    int T; cin >> T;

    while (T--){
        int n; cin >> n;

        int a[n]; 
        for (int i = 0; i < n; i++){cin >> a[i];}
        int c = 0, total =0, leftover = 0;
        for (int i = 0; i < n; i ++){
            if (a[i] == 1){
                c++;
                if(leftover){
                    leftover--;
                }
                else{
                    total++;
                }
            }
            else{
                int req = c==0 ? 0 : c/2+1;
                leftover = total - req;

            }
        }

        cout << total << endl;

    }
}