#include <bits/stdc++.h>

using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main() {
    int t;
    cin >> t;
    forn(tt, t) {
        string s;
        cin >> s;
        int p;
        cin >> p;
        string w(s);
        sort(w.rbegin(), w.rend());
        int cost = 0;
        forn(i, s.length())
            cost += s[i] - 'a' + 1;
        map<char,int> del;
        forn(i, w.length())
            if (cost > p) {
                del[w[i]]++;
                cost -= w[i] - 'a' + 1;
            }
        forn(i, s.length()) {
            if (del[s[i]] > 0) {
                del[s[i]]--;
                continue;
            }
            cout << s[i];
        }
        cout << endl;
    }
}

