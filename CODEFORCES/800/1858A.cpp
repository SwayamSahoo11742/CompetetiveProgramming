#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int a,b,c; cin >> a >> b >> c;
        if(a == b && c %2 ==1){
            cout << "First" << endl;
        }else if(a > b){
            cout << "First" << endl;
        }else if(b > a){
            cout << "Second" << endl;
        }else{
            cout << "Second" << endl;
        }
    }
}