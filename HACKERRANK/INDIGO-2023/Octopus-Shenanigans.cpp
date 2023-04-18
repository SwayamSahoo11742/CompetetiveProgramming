#include <bits/stdc++.h>
using namespace std;

vector<string> r;
map<char, bool> f;
vector<char> path;
vector<int> d;

void dfs(int row, int col){
    f[r[row][col]] = true;
    path.push_back(r[row][col]);

    if(row != r.size() - 1 && !f[r[row + 1][col]]){
        dfs(row + 1, col);
    }
    if(col != r[row].size() - 1 && !f[r[row][col + 1]]){
        dfs(row, col + 1);
    }
    if(row != 0 && !f[r[row - 1][col]]){
        dfs(row - 1, col);
    }
    if(col != 0 && !f[r[row][col - 1]]){
        dfs(row, col - 1);
    }

    d.push_back(path.size());
    path.pop_back();
    f[r[row][col]] = false;
}

int main(){
    int n, m; 
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        r.push_back(s);
    }

    for (char c = 'A'; c <= 'Z'; c++) {
        f[c] = false;
    }

    dfs(0, 0);

    cout << *max_element(d.begin(), d.end()) << endl;
    
}
