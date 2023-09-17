#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n;i++){
            cin >> a[i];
        }
        int f = 0;
        for(int i = 0; i < n; i++){
            if(a[i]%5==0){
                f = 1;
                a[i] = a[i] + a[i]%10;
            }
        }
        if(f){
            cout << (*min_element(a.begin(), a.end()) == *max_element(a.begin(), a.end()) ? "Yes": "No") << '\n';
        }else{
            bool f2 = 0;bool f12 = 0;
            for(int i = 0; i < n; i++){
                int x = a[i];
                while(x%10 != 2){
                    x = x+x%10;
                }
                if(x%20 == 2){
                    f2 = 1;
                }else{
                    f12 = 1;
                }
            }
            cout << ((f2 && f12)? "NO":"YES") << endl;

        }
    }
}