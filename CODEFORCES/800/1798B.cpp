#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; cin>>T;

    while(T--){
        int n;
        cin >>n;
        vector<int> a(n), b(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }


        for(int i = 0; i < n; i++){
            if (a[i] > b[i]){
                int t = a[i];
                a[i] = b[i];
                b[i] = t;
            }
        }

        if (*max_element(b.begin(), b.end()) == b[b.size() - 1] && *max_element(a.begin(), a.end()) == a[a.size() - 1]){
            cout <<"YES" <<endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}