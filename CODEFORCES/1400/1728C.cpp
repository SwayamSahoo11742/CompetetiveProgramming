#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int ans = 0;
        int n; cin >> n;
        priority_queue<int> a, b;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            a.push(x);
        }
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            b.push(x);
        }
        while(!a.empty()){
            int at = a.top(), bt = b.top();
            if(at == bt){
                a.pop();
                b.pop();
                continue;
            }
            ans++;
            if(at > bt){
                a.pop();
                a.push(to_string(at).size());
            }else{
                b.pop();
                b.push(to_string(bt).size());
            }
        }
        cout << ans << endl;
        




    }
}