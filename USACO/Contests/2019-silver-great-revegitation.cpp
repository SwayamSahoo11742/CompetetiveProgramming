#include <bits/stdc++.h>
using namespace std;
 
int N, M, answer;
int L[100001];
vector<int> S[100001], D[100001];
bool ans;
 
void visit(int x, int v)
{
  L[x] = v;
  for (auto n : S[x]) {
    if (L[n] == 3-v) ans = true; 
    if (L[n] == 0) visit(n, v);
  }
  for (auto n : D[x]) {
    if (L[n] == v) ans = true; 
    if (L[n] == 0) visit(n, 3-v);
  }  
}
 
int main(void)
{
  ifstream fin ("revegetate.in");
  fin >> N >> M;
  for (int i=0; i<M; i++) {
    int a, b;
    string s;
    fin >> s >> a >> b;
    if (s=="S") { S[a].push_back(b); S[b].push_back(a); }
    if (s=="D") { D[a].push_back(b); D[b].push_back(a); }
  }
 
  for (int i=1; i<=N; i++) 
    if (!L[i]) { visit(i,1); answer++; }
  
  ofstream fout ("revegetate.out");
  if (ans) fout << "0" << endl;
  else {
    fout << "1";
    for (int i=0; i<answer; i++){
         fout << "0";
    }
    fout << endl;
  }
  return 0;
}