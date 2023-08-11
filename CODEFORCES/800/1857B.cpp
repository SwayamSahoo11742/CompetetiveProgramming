#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        string s; cin >> s;
        int n = s.size();
        vector<int> a(n+1);
        for(int i = 1; i <= n; i++){
            a[i] = s[i-1] - '0';
        }

        for(int i = 0; i <= n; i++){
            if(a[i]>=5){
                a[i] = 0;
                a[i-1]++;
                for(int j = i; j <= n; j++){
                    a[j] = 0;
                }
                for(int j = i; j>=0; j--){
                   if(a[j] >= 5){
                    a[j-1]++;
                    a[j] = 0;
                   }
                }
                break;
            }
        }
        for(int i = 0; i <= n; i++){
            if(i == 0){
                if(a[i]){
                    cout << a[i];
                }
                continue;
            }
            cout << a[i];
        }
        cout << endl;
    }
}