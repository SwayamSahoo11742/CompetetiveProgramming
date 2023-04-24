#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; cin >> T;
    while(T--){
        vector<string> grid(8);
        for(int i = 0; i < 8; i++){
            cin >> grid[i];
        }

        bool R = false;
        for(auto row : grid){
            if(row == "RRRRRRRR"){
                R = true;
                break;
            }
        }

        if(R){
            cout << 'R' << endl;
        }else{
            cout << 'B' << endl;
        }
    }
}