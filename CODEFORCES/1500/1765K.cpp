#include <bits/stdc++.h>
using namespace std;
int main(){

        int n; cin >> n;
        long long sum = 0, m = INT_MAX;
        for(int i = 1; i <= n; i++){
            int x = i;
            for(int j = 1; j <= n; j++){
                int y = j;
                long long val; cin >> val;
                if(y == n+1-x){
                    m = min(m, val);
                }
                sum += val;
            }
        }
        cout << sum - m << endl;
    }
