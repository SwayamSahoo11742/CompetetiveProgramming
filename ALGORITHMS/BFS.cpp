#include <bits/stdc++.h>

using namespace std;
map<int, vector<int>> t;
vector<int> visits;
vector<bool> marked(90, false);

void bfs(int node){
    queue<int> q;
    q.push(node);
    marked[node] = true;

    while(!q.empty()){
        int cur = q.front();
        visits.push_back(cur);
        q.pop();
        for(int n: t[cur]){
            if(!marked[n]){
                marked[n] = true;
                q.push(n);
            }
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
    bfs(b);

    for(int node : visits){
        cout << node << " ";
    }
    cout << endl;
}