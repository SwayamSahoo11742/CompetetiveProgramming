#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; cin >> T;

    while(T--){
        int n; cin >> n;
        string s; cin >> s;

        int x = 0, y = 0;
        bool found = false;

        for(auto i : s){
            switch (i)
            {
            case 'R':
                x++;
                break;
            
            case 'L':
                x--;
                break;
            
            case 'U':
                y++;
                break;
            
            case 'D':
                y--;
                break;
            }

            if ( x== 1 && y == 1){
                found = true;
                break;
            }
        }

        if (found){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
}