#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; cin >> T;

    while (T--){
        string min,max; cin >> min >> max;
        int v = 0, m = -1;

        for (int i = std::max(stoi(min), stoi(max) - 100); i <= stoi(max); i++){
            string n = to_string(i);

            int diff = (*max_element(n.begin(), n.end()) - *min_element(n.begin(), n.end()));
            if (diff > m){
                m = diff;
                v = i;
            }

        }

        cout << v << endl;
    }
}