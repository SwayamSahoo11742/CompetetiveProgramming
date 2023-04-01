#include <bits/stdc++.h>

using namespace std;
const string MEOW = "meow";
int main (){
    int T; cin >> T;

    while(T--){
        int n; cin >> n;
        string s = "";
        cin >> s;
        for(int i = 0; i < n; i++){
            s[i] = tolower(s[i]);
        }
        bool no = true;
        s.erase(unique(s.begin(), s.end()), s.end());
        s == MEOW? no = true : no = false;
        no? cout << "YES" << endl : cout << "NO" << endl;

        
    }
}
