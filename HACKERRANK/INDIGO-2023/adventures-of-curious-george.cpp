#include <bits/stdc++.h>

using namespace std;

bool compareLength(const std::string& a, const std::string& b) {
  if (a.length() != b.length()) { // Compare by length
    return a.length() > b.length();
  }
  // If lengths are equal, compare alphabetically
  return a < b;
}

int main(){
    int n; cin >> n;

    vector<string> s(n);
    vector<int> y(n);

    for(int i = 0; i < n; i++){
        cin >> s[i];
    }

    for(int i = 0; i < n; i++){
        s[i].erase(std::remove(s[i].begin(), s[i].end(), 'x'), s[i].end());
        for(int j = 0; j < s[i].length(); j++){
            if(s[i][j] == 'y'){
                y[i]++;
            }
        }
        s[i].erase(std::remove(s[i].begin(), s[i].end(), 'y'), s[i].end());
    }

    vector<string> m(n, "");

    for(int i = 0; i < n; i++){
        m[i] += s[i];
        for(int j = 0; j < y[i]; j++){
            m[i]+='y';
        }
    }
    sort(m.begin(),m.end(), compareLength);
    for(string str: m){
        cout << str << endl;
    }
    


}