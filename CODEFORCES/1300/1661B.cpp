#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    
    for(int num: a){
        int ans = INT_MAX;
        for(int i = 0; i <= 15; i++){
            for(int j = 0; j <= 15; j++){
                int two = 1;
                for(int p = 1; p <=j; p++){
                    two*=2;
                }
                if((num+i)*two % 32768 == 0){
                    ans = min(i+j, ans);
                }
            }
        }
        cout << ans << endl;
    }



}