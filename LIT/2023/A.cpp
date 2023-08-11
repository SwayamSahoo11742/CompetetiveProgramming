#include <bits/stdc++.h>    
using namespace std;
int main(){
    int n; cin >> n;
    vector<pair<int,int>> a;
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        a.push_back({x,y});
    }
    sort(a.begin(), a.end());
    int i = 0;
    int tempans = 0, ans = 0;
    for(int i = 0; i < n; i++){
        int t;
        if(a[i].second == 2){
            t = 1;
            tempans+=2;
        }else{
            t = 0;
            tempans+=1;
        }
        for(int j = i+1; j < n;j++){
            if(a[j].second == 2){
                t = 1; tempans += 2;
            }
            if(a[j].second == 1 && !t){
                tempans++;
            }
        }
        ans = max(tempans, ans);
        tempans = 0;
    }
    cout << ans+1000000000 << endl;
}