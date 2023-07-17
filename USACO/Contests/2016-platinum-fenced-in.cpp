#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream fin("fencedin.in"); ofstream fout("fencedin.out");
    int a,b,n,m; fin >> a >> b >> n >> m;
    vector<int> v(n+1), h(m+1);
    for(int i = 0; i < n; i++){
        fin >> v[i];
    }
    for(int i = 0; i < m; i++){
        fin >> h[i];
    }
    sort(v.begin(), v.end());
    sort(h.begin(), h.end());
    for(int i = 0; i < n; i++){
        v[i] = v[i+1]-v[i];
    }
    v[n] = a-v[n];
    for(int i = 0; i < m; i++){
        h[i] = h[i+1] - h[i];
    }
    h[m] = b-h[m];

    sort(v.begin(), v.end());
    sort(h.begin(), h.end());
    n++; m++;
    long long result = 1ll * v[0] * (m-1) + 1ll * h[0] * (n-1);
    for(int vi = 1, hi = 1; hi < m && vi < n;){
        if(v[vi] < h[hi]){
            result += v[vi++] * (m-hi);
        }else{
            result += h[hi++] * (n-vi);
        }
    }
    fout << result << endl;
}