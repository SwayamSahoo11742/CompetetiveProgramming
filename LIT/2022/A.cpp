#include <bits/stdc++.h>
using namespace std;
int s(int a, int b){
    string as = to_string(a), bs = to_string(b);
    int suma = 0, sumb = 0;
    for(int i = 0; i < as.size(); i++){
        suma += as[i] - '0';
    }
    for(int i = 0; i < bs.size(); i++){
        sumb += bs[i] - '0';
    }
    if(suma%13 == sumb%13){
        return a > b;
    }if(suma%13 > sumb%13){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int n; cin >> n;
    int m; cin >> m;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end(), s);
    for(int i = 0; i < m; i++){
        cout << a[i] << endl;
    }
}