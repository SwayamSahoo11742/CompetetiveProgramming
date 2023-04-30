#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    float D;
    cin >> N >> D;
    vector<int> P(N);
    for(int i = 0; i < N; i++){
        cin >> P[i];
    }
    sort(P.begin(), P.end(), greater<>());
    int left = N;
    int ans = 0;

    for(int i = 0; i < P.size(); i++){
        int req = ceil(D/P[i]);
        if(req * P[i] == D){
            req += 1;
        }

        if(req > left){
            break;
        }
        ans++;
        left-=req;
    }
    cout << ans << endl;

}