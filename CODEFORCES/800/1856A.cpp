#include <bits/stdc++.h>    
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i= 0;i < n; i++){
            cin >> a[i];
        }
        vector<int> sa(a.begin(), a.end());
        sort(sa.begin(), sa.end());
        if(a==sa){
            cout << 0 << endl;
            continue;
        }
        int s = -1;
        for(int i = n-1;i >= 0; i --){
            if(a[i] != sa[i]){
                s = i;
                break;
            }
        }
        if(s == -1){
            cout << sa[n-1] << endl;

        }else{
            cout << *max_element(a.begin(), a.begin()+s) << endl;
        }
        
    }
}