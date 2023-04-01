#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; cin >> T;

    while(T--){
        int n; cin >> n;
        int tot =0;
        vector<int> b(n);

        for(int i =0; i < n; i ++){
            cin >> b[i];
        }

        sort(b.begin(), b.end(), greater<int>());
        for(auto i: b){
            i < 0? tot--:tot++;
            cout << tot << " ";
            
        }
        cout << endl;


        tot = 0;
        vector<int> min;
        sort(b.begin(), b.end());
        for(int i = 0; i < n; i++){
            if (b[i] < 0){
                min.push_back(abs(b[i]));
                min.push_back(b[i]);
            }
            else{
                if (count(min.begin(), min.end(), b[i])){
                    continue;
                }else{
                    min.push_back(b[i]);
                }

            }

        }

        for(auto i: min){
            i < 0? tot--:tot++;
            cout << tot << " ";
        }
        cout << endl;
    }   
}