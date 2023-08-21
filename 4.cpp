#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    int n = s.size();
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        a[i] = s[i] - '0';
    }
    
    int val0 = 0, val1 = 0;
    vector<int> suf0(n), suf1(n);
    suf1[n-1] = a[n-1];
    for(int i = n-2; i >= 0; i--){
        suf1[i] = suf1[i+1] + a[i];
        if(!a[i]){
            val0 += suf1[i];
        }
    }
    suf0[n-1] = a[n-1] == 0;
    for(int i = n-2; i >= 0; i--){
        suf0[i] = suf0[i+1] + (a[i] == 0);
        if(a[i]){
            val1 += suf0[i];
        }
    }



}