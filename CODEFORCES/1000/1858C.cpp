#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        long long n; 
        cin >> n;
        vector<int>a, found(n+1);
        for(int i = 1; i <= n; i++){
            if(!found[i]){
                for(int ne=i; ne <= n; ne=ne*2){
                    found[ne] = 1;
                    a.push_back(ne);
                }
            }
        }
        for(int i: a){
            cout << i << " ";
        }cout << endl;
    }
}