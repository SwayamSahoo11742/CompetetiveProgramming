/*
 ID: swayams4
 LANG: C++17
 TASK: numtri
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream fin("numtri.in"); ofstream fout("numtri.out");
    int n; fin >> n;
    int a[1005][1005], dp[1005][1005];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            fin >> a[i][j];
        }
    }

    dp[1][1] = a[1][1];
    for(int i = 2; i <= n; i++){
        for(int j = 1; j <= i; j++){
            dp[i][j] = a[i][j];
            if(j==1){
                dp[i][j] += dp[i-1][j];
            }
            else if(j ==i){
                dp[i][j] += dp[i-1][j-1];
            }else{
                dp[i][j] += max(dp[i-1][j-1], dp[i-1][j]);
            }
        }
    }
    int ans = 0;
    for(int i = 1; i <= n; i++){
        ans = max(ans, dp[n][i]);
    }
    fout << ans << endl;

    
}