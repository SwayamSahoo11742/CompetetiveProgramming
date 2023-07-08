/*
ID: swyaams4
PROG: sort3
LANG: C++
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream fin("sort3.in"); ofstream fout("sort3.out");
    int n; fin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        fin >> a[i];
    }
    int i12, i13, i21, i23, i31,i32;
    i12 = i13 = i21 = i23 = i31 = i32 = 0;
    vector<int> sa(a.begin(),a.end());
    sort(sa.begin(), sa.end());
    for(int i =0; i < n; i++){
        if(a[i] == 1 && sa[i] == 2){i12++;}
        if(a[i] == 1 && sa[i] == 3){i13++;}
        if(a[i] == 2 && sa[i] == 1){i21++;}
        if(a[i] == 2 && sa[i] == 3){i23++;}
        if(a[i] == 3 && sa[i] == 1){i31++;}
        if(a[i] == 3 && sa[i] == 2){i32++;}
    }

    fout << min(i12,i21) + min(i23,i32) + min(i13,i31) + 2*(max(i12,i21)-min(i12,i21)) << endl;
}