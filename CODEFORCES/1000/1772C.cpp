#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; cin >> T; 
    while(T--){
        int k, n; cin >> k >> n;
        vector<int> unused;
        for(int i = 1; i <= n; i++){
            unused.push_back(i);
        }
        vector<int> a(k);
        
        a[0] = 1;
        int c = 1;
        for(int i = 1; i < k; i++){
            int used;
            if(a[i-1]+c > n){
                for(auto j:unused){
                    if(j>a[i-1]){
                        a[i] = j;
                        int used = j;
                    }
                }
            }else{
                a[i] = a[i-1] + c;
                int used = a[i];
            }
            c++;
            unused.erase(std::remove(unused.begin(), unused.end(), used), unused.end());
        }


        for(int i : a){
            cout << i << " ";
        }
        cout << endl;
    }
}