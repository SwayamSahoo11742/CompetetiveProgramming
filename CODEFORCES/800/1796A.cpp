#include <bits/stdc++.h>

using namespace std;

int main(){
    string fb= "";
    int i = 0;
    while(fb.length() < 20){
        i++;
        if (i % 3 == 0){
            fb += 'F';
        }
        if(i % 5 == 0){
            fb += 'B';
        }
    }
    int T; cin >> T;

    while (T--)
    {
        int n; cin >>n;
        string s;
        cin >> s;   

        if(fb.find(s) != string::npos){
            cout <<"YES" <<endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
}