#include <bits/stdc++.h>

using namespace std;

int main(){
    int x = 0, y = 0;
    string s; cin >> s;
    string cur = "";
    for(int i = 0; i < s.length(); i++){

        if(cur == "" || s[i] == cur[0]){
            cur += s[i];
        }else{
            int am = cur.length() * 2;
            if (cur.length() >= 3){
                am = 20 + (cur.length() - 3) * 5;
            }

                if(cur[0] == '^'){
                    y+= am;
                }else if(cur[0] == 'v'){
                    y -= am;
                }else if(cur[0] == '<'){
                    x-= am;
                }else if(cur[0] == '>'){
                    x+=am;
                }


            cur = s[i];
        }
    }

    int am = cur.length() * 2;
    if (cur.length() >=3){
        am = 20 + (cur.length() - 3) * 5;
    }

        if(cur[0] == '^'){
            y+= am;
        }else if(cur[0] == 'v'){
            y -= am;
        }else if(cur[0] == '<'){
            x-= am;
        }else if(cur[0] == '>'){
            x+=am;
        }


    cout << "(" << x << "," << y << ")" << endl;

    return 0;
}
