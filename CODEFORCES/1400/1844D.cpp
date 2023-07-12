#include <bits/stdc++.h>
using namespace std;
const string ALPHA = "abcdefghijklmnopqrstuvwxyz";

int factors(int n)
{
    map<int, int> mp;
    for (int i=1; i<=26; i++)
    {
        if (n%i == 0)
        {
            if (n/i == i){
                mp[i] = 1;
            }
  
            else{
                mp[i] = 1;
                mp[n/i] = 1;
            }
        }
    }
    for(int i = 1;i <=26; i++){
        if(!mp[i]){
            return i;
        }
    }
}
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        int fc = factors(n);

        int rc = n / fc; 
        int remainder = n% fc;
        string s = ALPHA.substr(0, fc);

        string rs;
        for (int i = 0; i < rc; ++i) {
            rs += s;
        }
        rs += s.substr(0, remainder);

        cout << rs << endl;
    }
}