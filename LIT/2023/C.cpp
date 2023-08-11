#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        float n, m, k; cin >> n >> m >> k;
        vector<int> a(n), b(m);
        float asum = 0, bsum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            asum += a[i];
        }
        for(int i = 0; i < m ; i++){
            cin >> b[i];
            bsum += b[i];
        }
        if(m == n || !k){ 
            cout << asum << bsum << endl;
            cout << (((asum/n) + (bsum/m)))/2 << endl;
            continue;
        }
        float op = k;
        if(m > n){
            sort(a.begin(), a.end());
            sort(b.begin(), b.end(), greater<>());
            for(int i = 0; i < k; i++){
                if(b.size() <= 1){
                    if(op >= 2){
                        b.push_back(a[0]);
                        a.erase(a.begin());
                        op--;
                        a.push_back(b[0]);
                        b.erase(b.begin());
                        op--;
                    }else{
                        break;
                    }
                }else{
                    if(op){
                        a.push_back(b[0]);
                        b.erase(b.begin());
                        op--;
                    }
                }
            }   
        }else{
            sort(b.begin(), b.end());
            sort(a.begin(), a.end(), greater<>());
            for(int i = 0; i < k; i++){
                if(a.size() <= 1){
                    if(op >= 2){
                        a.push_back(b[0]);
                        b.erase(b.begin());
                        op--;
                        b.push_back(a[0]);
                        a.erase(a.begin());
                        op--;
                    }else{
                        break;
                    }
                }else{
                    if(op){
                        b.push_back(a[0]);
                        a.erase(a.begin());
                        op--;
                    }
                }
            } 
        }
        asum =0; bsum = 0;
        int an = a.size(), bn = b.size();
        for(int i = 0; i < a.size(); i++){
            asum += a[i];
        }
        for(int i = 0; i < b.size(); i++){
            bsum += b[i];
        }
        cout << ((asum/an)+(bsum/bn)/(n*m))/2<< endl;
        

    }
}