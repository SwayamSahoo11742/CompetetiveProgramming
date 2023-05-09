#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        bool found1 = false, found2 = false;
        long long sk1 = INT_MAX, sk2 = INT_MAX, all = INT_MAX;
        for(int i = 0; i < n; i++){
            long long cost;
            string skill;
            cin >> cost >> skill;

            if(skill == "11"){
                if(!found1 || !found2){
                    found1 = true;
                    found2 = true;
                }
                all = min(all, cost);
            }else if(skill == "10"){
                if(!found1){
                    found1 = true;
                }
                sk1 = min(sk1, cost);
            }else if(skill == "01"){
                if(!found2){
                    found2 = true;
                }
                sk2 = min(sk2, cost);
            }
        }

        if(!found1 ||!found2){
            cout << -1 << endl;
            continue;
        }

        cout << min(sk1+sk2, all) << endl;


        
    }
}