#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; cin >> T;

    while(T--){
        string a, b;
        cin >> a >> b;
        if (a[0] == b[0]){
            cout << "YES" << endl << a[0] << "*" << endl;
            continue;
        }

        if (a[a.size() - 1] == b[b.size() - 1]){
            cout << "YES" << endl << "*" << a[a.size() - 1]<< endl;
            continue;
        }
        bool no = true;
        for (int i = 0; i < b.size() - 1; i++){
            for (int j = 0; j < a.size() - 1; j++){
                    if (b[i]==a[j] && b[i+1] == a[j+1]){
                    cout << "YES" << endl;
                    cout << "*" << b[i] << b[i+1] << "*" << endl;
                    no = false;
                    break;
                }
            }

            if (!no){
                break;
            }

        }

        if(no){
            cout << "NO" << endl;
        }
    }   

}
