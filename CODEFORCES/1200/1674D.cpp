#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        if(n == 1){
            cout << "YES" << endl;
            continue;
        }
        int er;
        if(n%2 == 1){
            er = a[0];
            a.erase(a.begin());
        }

        for(int i = 1; i < a.size(); i+=2){
            if(a[i] < a[i-1]){
                int temp = a[i];
                a[i] = a[i-1];
                a[i-1] = temp;
            }
        }
        string ans = "YES";
        if(n%2 == 1){
            a.insert(a.begin(), er);
        }
        for(int i = 1; i < a.size(); i++){
            if(a[i] < a[i-1]){
                ans = "NO";
                break;
            }
        }
        cout << ans << endl;

    }
}