#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; cin >>T;

    while(T--){
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        int n; cin >> n;

        string s1, s2;
        for(int i = 0; i < 2 * n - 2; i++){
            string temp;
            cin >> temp;
            if (temp.length() == n - 1 && s1.empty()){
                s1 = temp;
            }
            else if (temp.length() == n - 1 && s2.empty()){
                s2 = temp;
                break;
            }
        }

        string s, revs;

        if (s1.substr(1) == s2.substr(0, s2.length() - 1)){
            s = s1 + s2[s2.length() - 1];
        }
        else{
            s = s2 + s1[s1.length() - 1];
        }

        revs = s;
        reverse(revs.begin(), revs.end());

        if(s == revs){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}