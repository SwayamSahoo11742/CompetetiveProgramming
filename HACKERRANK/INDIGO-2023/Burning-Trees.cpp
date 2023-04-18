#include <bits/stdc++.h>
using namespace std;

map<int, vector<int>> m;
vector<bool> mark(1000, false);
map<int, int> d;

void dfs(int n){
    d[n]++;
    mark[n] = true;
    for(int i: m[n]){
        if(!mark[i]){
            d[i] = d[n] + 1;
            dfs(i);
        }
    }

}

int main(){
    int b; cin >> b;
    int c; cin >> c;

    for(int i = 0; i < c; i++){
        int parent ,child; cin >> parent >> child;
        m[parent].push_back(child);
        m[child].push_back(parent);
    }
    dfs(b);

    int max_key = d.begin()->first;  // initialize max_key to the first key in the map
    int max_val = d.begin()->second; // initialize max_val to the first value in the map

    for (auto& entry : d) {
        if (entry.second > max_val) {
            max_val = entry.second;
            max_key = entry.first;
        } else if (entry.second == max_val && entry.first > max_key) {
            max_key = entry.first;
        }
    }

    cout << max_key << endl;


}