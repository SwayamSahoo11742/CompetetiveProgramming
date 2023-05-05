#include <bits/stdc++.h>
using namespace std;
vector<int> a = {600, 60, 0, 10, 1};
vector<int> good = {0,70,140,210,280,350, 601, 671, 741, 811, 881, 951, 1202, 1272, 1342, 1412};
int main(){
    int T; cin >> T;
    while(T--){
        string s; cin >> s;
        int n; cin >> n;
        int tot = 0;
        for(int i = 0; i < 5; i++){
            tot += (int)(s[i] - '0') * a[i];
        }

        set<int> t;

        for(int i = 0; i < 2022; i++){
            t.insert(tot);
            tot += n;
            tot %= 1440;
        }
        int ans =  0;
        for(int i : t){
            for(int j = 0; j < 16; j++){
                if (good[j] == i){
                    ans++;
                }
            }
        }

        cout << ans << endl;

    }
}