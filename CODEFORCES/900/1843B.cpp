#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<int> a(n);
        long long sum = 0;
        long long ops = 0;
        bool blob = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += abs(a[i]);

            if(a[i] < 0 && !blob){
                blob = 1;
            }

            if((a[i] > 0 && blob) || (i == n-1 && blob)){
                ops++;
                blob = 0;
            }

        }

        cout << sum << " " << ops << endl;
    }
}