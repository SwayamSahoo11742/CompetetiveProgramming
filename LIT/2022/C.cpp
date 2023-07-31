#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k; cin >> n >> k;
    vector<int> a(n);
    int s = 0;

    for(int i = 0;i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++){
        if(i+1 < (n+1)/2 && k){
            
            if(k - a[i] < 0){
                s+=k;
                k = 0;
            }else{
                k-= a[i];
               s+=a[i];
            }
        }

        if(i+1 > (n+1)/2 && k){

        }
    }
    int ans = a[((n+1)/2)-1];
    int x = a[((n+1)/2)];
    if(ans + s > x){
        s-=x-ans;
        ans += x-ans;
        ans += s/2;
    }else{
        ans += s;
        int tmp = 0;
        for(int i = (n+1)/2;i<n; i++){
            while(a[i] != 0){
                if(ans+1 > a[i]-1){
                    break;
                }
                a[i]--;
                ans++;
            }
        }

    }
    cout << ans << endl;
    
}