#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(n);
    int c = 0, ans = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(i > 0){
            if(a[i] > a[i-1]){
                c++;
                if(c == 2){
                    ans++;
                }
            }else{
                c = 0;
            }
        }
    }
    cout << ans<< endl;
}