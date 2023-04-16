#include <bits/stdc++.h>

using namespace std;
map<int, vector<int>> t;
vector<int> visits;
vector<bool> marked(90, false);


void dfs(int node){
    visits.push_back(node);
    
    marked[node] = true;
    for(int c: t[node]){
        if(!marked[c]){
            dfs(c);
        }
    }
}


int main(){
    int b; cin >> b;
    int c; cin >> c;
    

    for(int i = 0; i < c; i++){
        int parent; cin >> parent;
        int child; cin >> child;
        t[parent].push_back(child);
        t[child].push_back(parent);
    }
    dfs(b);

    for(int node : visits){
        cout << node << " ";
    }
    cout << endl;
}

