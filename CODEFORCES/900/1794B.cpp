#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; cin >> T;

    while(T--){
        int n; cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i ++){
            int temp;
            cin >> temp;

            if(temp == 1){
                temp =2;
            }

            a[i] = temp;
        }

        for(int i = 1; i < n; i++){
            if(a[i] % a[i - 1] == 0){
                a[i]++;
            }
        }

        for(auto i : a){
            cout << i << " ";
        }
        cout << endl;
    }
}