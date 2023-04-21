#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }

        int i = 0, j = n - 1;

        while(a[i] == b[i]){
            i++;
        }
        while(a[j] == b[j]){
            j--;
        }

        while(i > 0 && b[i-1] <= b[i]){
            i--;
        }

        while(j < n-1 && b[j+1] >= b[j]){
            j++;
        }

        cout << i + 1 << " " << j + 1 << endl;

    }
}