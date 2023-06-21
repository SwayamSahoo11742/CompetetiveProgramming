#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream fin("berries.in"); ofstream fout("berries.out");
    int N, K; fin >> N >> K;
    vector<int> B(N);
    for(int i = 0;i < N; i++){
        fin >> B[i];
    }
    sort(B.begin(), B.end(), greater<>());
    int elbe = K/2;
    B.erase(B.begin(), B.begin() + elbe);
    int ans = 0;
    for(int i = 0; i < elbe; i++){
        ans += B[i];
    }
    fout << ans << endl;
}