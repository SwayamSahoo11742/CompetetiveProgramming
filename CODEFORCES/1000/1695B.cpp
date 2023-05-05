#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<int> a(n);
        int min = INT_MAX, x = 0;;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] < min){
                min=a[i];
                x = i%2;
            }
        }

        if(n%2 || x == 1){
                cout << "Mike" << endl;
            }else{
                cout << "Joe" << endl;
            }

        
    }
}