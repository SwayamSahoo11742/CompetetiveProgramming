#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n; cin >> n;
    while(cin >> n){
        if(n%2 || ((n + n/2) ^ (n/2)) != n)cout << "-1\n";
        else cout << n + n/2 << ' ' << n/2 << '\n';
    }
}