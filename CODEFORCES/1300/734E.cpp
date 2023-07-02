#include <bits/stdc++.h>
using namespace std;
vector<int> wb;
map<int,vector<int>> mp;
map<int,int> w,b;
int bct = 0, wct = 0;

void dfsw(int node){
    w[node] = false;
    for(int c: mp[node]){
        if(w[c] && wb[c-1] == 0){
            dfsw(c);
        }
    }
}
void dfsb(int node){
    b[node] = false;
    for(int c: mp[node]){
        if(b[c] && wb[c-1] == 1){
            dfsb(c);
        }
    }
}

int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        wb.push_back(x);
        if(x){
            b[i+1] = 1;
        }else{
            w[i+1] = 1;
        }
    }
    for(int i = 0; i < n-1;i++){
        int s,e; cin >> s >> e;
        mp[s].push_back(e);
        mp[e].push_back(s);
    }
    int i = 0;
    for(auto [idx,flag]:w){
        if(w[idx]){
            dfsw(idx);
            wct++;
        }
    }
    for(auto [idx,flag]:b){
        if(b[idx]){
            dfsb(idx);
            bct++;
        }
    }
    cout << min(wct,bct) << endl;

}